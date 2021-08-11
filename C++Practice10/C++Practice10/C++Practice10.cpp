#include <string>
#include <windows.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include "dot.h"
#include "Triangle.h"
//#include "dCard.h"
using namespace std;

//using namespace std;
//
//class Student
//{
//	IdCard* iCard;
//	string name;
//	string last_name;
//	
//public:	
//	void setIdCard(IdCard* c);
//	IdCard getIdCard();
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
//	Student(string name, string last_name, IdCard * id)
//	{
//		set_name(name);
//		set_last_name(last_name);
//		setIdCard(id);
//		
//	}
//	void setIdCard(IdCard* c)
//	{
//		iCard = c;
//	}
//	IdCard getIdCard()
//	{
//		return *iCard;
//	}
//
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
//	
//	SetConsoleOutputCP(1251);
//	IdCard idc(123, "Базовый");
//	
//	string  name;
//	string  last_name;
//	Student * student01 = new Student(name, last_name, idc);
//	int scores[5];
//
//	cout << "Name: ";
//	getline(cin,name);
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
//	student01->set_name(name);
//	student01->set_last_name(last_name);
//	student01->set_scores(scores);
//	double average_score = sum / 5.0;
//	student01->set_average_score(average_score);
//	cout << "Average ball for " << student01->get_name() << " "
//		<< student01->get_last_name() << " is "
//		<< student01->get_average_score() << endl;
//	student01->save();
//	cout <<  "IdCard:" << student01->getIdCard().getNumber() << endl;
//	cout << "Category:"  << student01->getIdCard().getCategory() << endl;
//	return 0;
//}



//Control Task
int main()
{
    system("chcp 1251");
    // composition
    double x1, y1, x2, y2, x3, y3;
    cout << "Введите координаты  треугольника: " << endl;
    cout << "Вершина a (x y) = ";
    cin >> x1 >> y1;
    cout << "Введите координаты  треугольника: " << endl;
    cout << "Вершина b (x y) = ";
    cin >> x2 >> y2;
    cout << "Введите координаты  треугольника: " << endl;
    cout << "Вершина c (x y) = ";
    cin >> x3 >> y3;
    Triangle* t1 = new Triangle(x1, y1, x2, y2, x3, y3);
    t1->ShowSides();
    cout << "Периметр треугольника = " << t1->Perimeter() << endl;
    cout << "Площадь треугольника = " << t1->Square() << endl;

    // aggregation
    double x, y;
    cout << "Введите координаты точек треугольника: " << endl;
    cout << "Вершина a (x y) = ";
    cin >> x >> y;
    Dot* a = new Dot(x, y);
    cout << "Вершина b (x y) = ";
    cin >> x >> y;
    Dot* b = new Dot(x, y);
    cout << "Вершина c (x y) = ";
    cin >> x >> y;
    Dot* c = new Dot(x, y);
    Triangle* t2 = new Triangle(a, b, c);
    t2->ShowSides();
    cout << "Периметр треугольника = " << t2->Perimeter() << endl;
    cout << "Площадь треугольника = " << t2->Square() << endl;

    
}