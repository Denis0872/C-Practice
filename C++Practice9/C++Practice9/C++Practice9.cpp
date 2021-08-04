

#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;
//class DivideByZeroError
//{ 
//	private: string message;
//	public: DivideByZeroError() : message("Деление на нуль") { } 
//	void printMessage() const { cout << message << endl; } 
//	
//};
//float quotient(int numl, int num2) 
//{ if (num2 == 0) 
//throw DivideByZeroError(); 
//return (float)numl / num2; }
//int main()
//{
//	SetConsoleOutputCP(1251);
//	cout << "Введите число:\n";
//	int number1, number2;
//	cin >> number1;
//	//cin >> number2;
//	for (int i = -10; i < 10; i++) {
//		try {
//			float result = quotient(number1, i);
//			cout << "Частное равно " << result << endl;
//		}
//		catch (DivideByZeroError& error)
//		{
//			cout << "ОШИБКА: "; 
//			error.printMessage();
//			
//		}
//	}
//
//}

//Task1
class Student
{

public:	
	void set_name(string student_name)
	{
		name = student_name;
	}
	string get_name()
	{
		return name;
	}
	void set_last_name(string student_last_name)
	{
		last_name = student_last_name;
		
	}
	string get_last_name()
	{
		return last_name;
	}

	void save()
	{
		ofstream fout("students.txt", ios::app);
		fout << Student::get_name() << " "
			<< Student::get_last_name() << " ";
		for (int i = 0; i < 5; ++i) {
			fout << Student::scores[i] << " ";
		}
		
			fout << endl;
		fout.close();
	}
	void set_average_score(double ball)
	{
		average_score = ball;
	}
	
	double get_average_score()
	{
		return average_score;
	}
	class ExScore 
	{
	public:
		string origin;
		int iValue; 
		ExScore(string orc, int sc)
		{
			origin = orc; 
			iValue = sc; 
		}
	};
	void set_scores(int student_scores[])
	{
		for (int i = 0; i < 5; ++i) {
			if (student_scores[i] > 5)
				throw ExScore("в функции set_scores()", student_scores[i]);
			scores[i] = student_scores[i];
		}
	}
private:
	int scores[5]; 
	double average_score; 
	string name; 
	string last_name; 
};

int main()
{
	SetConsoleOutputCP(1251);
	Student student01;
	string name;
	string last_name;
	int scores[5];

	cout << "Name: ";
	getline(cin, name);
	cout << "Last name: ";
	getline(cin, last_name);
	int sum = 0;
	
	for (int i = 0; i < 5; ++i) {
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];
		
		sum += scores[i];
	}
	student01.set_name(name);
	student01.set_last_name(last_name);
	try{student01.set_scores(scores);
	double average_score = sum / 5.0;
	student01.set_average_score(average_score);
	cout << "Average ball for " << student01.get_name() << " "
		<< student01.get_last_name() << " is "
		<< student01.get_average_score() << endl;
	student01.save();
	return 0;}
	catch (Student::ExScore& ex)
	{
		cout << "\nОшибка инициализации " << ex.origin;
		cout << "\nВведенное значение оценки " << ex.iValue << "является недопустимым\n";
	}
}
