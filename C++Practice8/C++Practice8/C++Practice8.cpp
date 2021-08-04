#include <string>
#include <windows.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include "ClassFile.h"



using namespace std;
//Task1
//class Student
//{
//public:	
//	void set_name(string student_name)
//	{
//		name = student_name;
//	}
//	string get_name()
//	{
//		return name;
//	}
//	void set_last_name(string student_last_name)
//	{
//		last_name = student_last_name;
//		
//	}
//	string get_last_name()
//	{
//		return last_name;
//	}
//	void set_scores(int student_scores[])
//	{
//		for (int i = 0; i < 5; ++i) {
//			scores[i] = student_scores[i];
//		}
//	}
//	void save()
//	{
//		ofstream fout("students.txt", ios::app);
//		fout << Student::get_name() << " "
//			<< Student::get_last_name() << " ";
//		for (int i = 0; i < 5; ++i) {
//			fout << Student::scores[i] << " ";
//		}
//		
//			fout << endl;
//		fout.close();
//	}
//	void set_average_score(double ball)
//	{
//		average_score = ball;
//	}
//	
//	double get_average_score()
//	{
//		return average_score;
//	}
//private:
//	int scores[5]; 
//	double average_score; 
//	string name; 
//	string last_name; 
//};
//
//int main()
//{
//	SetConsoleOutputCP(1251);
//	Student student01;
//	string name;
//	string last_name;
//	int scores[5];
//
//	cout << "Name: ";
//	getline(cin, name);
//	cout << "Last name: ";
//	getline(cin, last_name);
//	int sum = 0;
//	
//	for (int i = 0; i < 5; ++i) {
//		cout << "Score " << i + 1 << ": ";
//		cin >> scores[i];
//		
//		sum += scores[i];
//	}
//	student01.set_name(name);
//	student01.set_last_name(last_name);
//	student01.set_scores(scores);
//	double average_score = sum / 5.0;
//	student01.set_average_score(average_score);
//	cout << "Average ball for " << student01.get_name() << " "
//		<< student01.get_last_name() << " is "
//		<< student01.get_average_score() << endl;
//	student01.save();
//	return 0;
//}


int main()
{
    SetConsoleOutputCP(1251);
    system("chcp 1251");
    int h, m, s;

    cout << "Введите время в формате 00 00 00:" << endl;
    cin >> h >> m >> s;
    Time T1(h, m, s);
    T1.ShowTime();

    cout << "Введите время в формате 00 00 00:" << endl;
    cin >> h >> m >> s;
    Time T2(h, m, s);
    T2.ShowTime();

    Time tSum;
    tSum.SumTime(T1, T2);
    tSum.ShowTime();

 

}

