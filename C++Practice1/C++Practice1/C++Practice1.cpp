
#include <iostream>
#include <string>
#include<math.h>
using namespace std;
//int main()
//{
//	string name;
//	cout << "What is your Name? ";
//		getline(cin, name);
//	cout << "Hello, " << name << "!\n";
//}
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//SetConsoleOutputCp(1251);
//	
//	system("chcp 1251");
//	double x;
//	double a, b; cout << "Введите a и b:\n";
//	cin >> a; // ввод с клавиатуры значения a
//	cin >> b; // ввод с клавиатуры значения b
//	x = a / b; // вычисление значения x
//	cout.precision(3);   
//   cout << sizeof(a / b) << ends << sizeof(x) << endl;
//	cout << "\nx = " << x << endl; //вывод результата на экран
//	
//	return 0;
//}
//int main()
//{
//	system("chcp 1251");
//	string name;
//	cout << "Введите свое имя";
//	double x;
//	double a, b;
//	cout << "\nВведите a и b:\n";
//	cin >> a;
//	cin >> name;
//	cin >> b;
//	x = a / b;
//	cout << "\nx = " << x << endl;
//	cout << "Привет, " << name << "!\n";
//	return 0;
//}
//int main()
//{
//	system("chcp 1251");
//	cout.precision(2);
//	double a, b, c;
//	double p;
//	double s;
//	cout << "\nВведите стороны a, b,c :\n";
//	cin >> a;
//	cin >> b;
//	cin >> c;
//	p = (a + b + c) / 2;
//	 s = sqrt(p*(p - a)*(p - b)*(p - c));
//	cout << "Площадь треугольника равна:  " << s << " квадратных литров\n";
//	return 0;
//}
int main()
{
	system("chcp 1251");
	cout.precision(2);
	int x1, y1;
	cout << "\nВведите координаты первой точки x1,y1 :\n";
	cin >> x1;
	cin >> y1;
	int x2, y2;
	cout << "\nВведите координаты второй точки x2,y2 :\n";
	cin >> x2;
	cin >> y2;
	int x3, y3;
	cout << "\nВведите координаты третьей точки x3,y3 :\n";
	cin >> x3;
	cin >> y3;
	int x4, y4;
	cout << "\nВведите координаты четвёртой точки x4,y4 :\n";
	cin >> x4;
	cin >> y4;
	int x5, y5;
	cout << "\nВведите координаты пятой точки x5,y5 :\n";
	cin >> x5;
	cin >> y5;
	double s;
	s = abs(x1*y2+x2*y3+x3*y4+x4*y5+x5*y1-x2*y1-x3*y2-x4*y3-x5*y4-x1*y5) / 2;
	cout << "Площадь пятиугольника равна:  " << s << " квадратных литров\n";
	return 0;
}


