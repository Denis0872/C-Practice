// C++Practice4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <math.h>
#include <iostream>
#include <windows.h>
#include <iomanip>

using  namespace std;

//Task1
//void fum_value(double k, double x, double y)
//{
//	x = x + k;
//	y = y + k;
//}
//void fum_ptr(double k, double* x, double* y)
//{
//	*x = *x + k;
//	*y = *y + k;
//	
//}
//void fum_ref(double k, double& x, double& y)
//{
//	x = x + k;
//	y = y + k;
//}
//void print(double x, double y)
//{
//	cout << "x = " << x << "; y = " << y << endl;
//}
//
//int main()
//{
//	double k = 2.5;
//	double xv = 10;
//	double yv = 10;
//	print(xv, yv);
//	fum_value(k, xv, yv); // Передача в функцию обычного параметра
//	print(xv, yv);
//	fum_ptr(k, &xv, &yv); // Передача в функцию параметра указателя
//	print(xv, yv);
//	fum_ref(k, xv, yv); // Передача в функцию параметра ссылки
//	print(xv, yv);
//	return 0;
//   
//}
//Task2
//void swap(int*, int*);
//void swap(int&, int&);
//void print(int x, int y)
//{
//	cout << "x = " << x << "; y = " << y << endl;
//}
//
//int main()
//{
//	int x = 5, y = 10;
//	swap(&x, &y);
//	print(x, y);
//	swap(x, y);
//	print(x, y);
//}
//void swap(int* x, int* y)
//{
//	int temp;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}
//void swap(int& x, int& y)
//{
//	int temp;
//	temp = x;
//	x = y;
//	y = temp;
//}
//ControlTask1
//int Myroot(double, double, double, double&, double&);
//int main()
//{
//	SetConsoleOutputCP(1251);
//	double a, b, c, k=0 ,l=0, res=0;
//	cout << "Введите коэффициенты квадратного уравнения a,b,c  a*x*x+b*x+c=0:" << endl;
//	cin >> a;
//	cin >> b;
//	cin >> c;
//
//	res=Myroot(a, b, c, k, l);
//	cout << "Возврат значения -1-корней нет, 0-корни одинаковы, 1-есть два корня. Значение:  " << res<< endl;
//	
//}
//int Myroot(double a, double b, double c, double& k, double& l)
//{
//	//int x;
//	int d;
//	d = b * b - 4 * a * c;
//	if (d < 0) {
//		return -1;
//	}
//	else if (d == 0)
//	{
//		k = l = (-b + sqrt(d)) / 2*a;
//		cout << "оба корня одинаковы: " << k << endl;
//		return 0;
//		
//	}
//	else (d >= 0);
//	k = (-b + sqrt(d)) / 2 * a;
//	l = (-b - sqrt(d)) / 2 * a;
//	cout << "корень первый:  " << k << "корень второй:  " << l<< endl;
//		return 1;	
//}
//ControlTask2
bool Input(int a, int b);

int main()
{
	SetConsoleOutputCP(1251);

	int a=0, b=0;
	cout << "Введите число А в диапозоне от 0 до 100  " << a << endl;
	cin >> a;
	
	cout << "Введите число B в диапозоне от 50 до 150  " << a << endl;
	cin >> b;
	
	if (Input(a, b) == false) // if(!Input(a,b))
	{
		cerr << "error";
		return 1;
	}
	int s = a + b;
	cout << "Число S равно:  " << s << endl;
	return 0;
}
bool Input(int x, int y)
{
	
	if (x > 0 && x < 100 && y > 50 && y < 150) {
		return true;
	}
	else return false;
	

}
