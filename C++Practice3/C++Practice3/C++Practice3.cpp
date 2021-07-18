
#include <iostream>
#include <windows.h>
#include <iomanip>
#include <math.h>

using  namespace std;

	//task1-1
//    void privet(string);

//    int main()
//    {
//        string name;
//        cout << "What is your name?" << endl;
//        cin >> name;
//        privet(name);
//        return 0;
//    }

// void privet(string name)
//    {
//        cout << name << ", " << "hello!" << endl;
//    }
 //task1-2
 //string privet(string name)
 //{
 //    string str = name + ", " + "hello!\n";
 //    return str;
 //}
 //int main()
	//     {
	//         string name;
	//         cout << "What is your name?" << endl;
	//         cin >> name;
	//        string nameout= privet(name);
	   //	 cout << nameout  << endl;
	//         return 0;
	//     }
 //Task2
	//void privet(string name, int k)
	//{
	//	cout << name << ", " << "hello! " << "you input " << k << endl;

	//}
	//string privet(string name)
	//{
	//	string str = name + ", " + "hello!\n";
	//	return str;
	//}
	//int main()
	//{
	//	SetConsoleOutputCP(1251);
	//	int k;
	//	string name;
	//	cout << "What is your name?" << endl;
	//	cin >> name;
	//	cout << "Input number:" << endl;
	//	cin >> k;
	//	string nameout = privet(name);
	//	cout << nameout << endl;
	//	privet(name, k);

	//	return 0;
	// }
		//Task3
//	
//long double firBinSearch(double a, int n)
//	{
//		double L = 0;
//		double R = a;
//		while (R - L > 1e-10)
//		{
//			double M = (L + R) / 2;
//			if (pow(M, n) < a)
//			{
//				L = M;
//			}
//			else
//			{
//				R = M;
//			}
//		}
//		return R;
//	}
//	
//int main()
//{
//	SetConsoleOutputCP(1251);
//	double final=0;
//	double digit=0;
//	int sqrtDigit=0;
//	int presision = 6;
//	cout << "Введите основное  число от 1 до 1000" << endl;
//	cin >> digit;
//	if (1 <= digit&& digit<= 1000)
//	{
//		cout << "Введите значение степени корня от 1 до 10" << endl;
//		cin >> sqrtDigit;
//		if (1 <=sqrtDigit&& 10>= sqrtDigit)
//		{
//			final = firBinSearch(digit, sqrtDigit);
//			cout << fixed << setprecision(6) << double(final) << endl;
//		}
//		else
//		{
//			cout << "введите правильный диапозон" << endl;
//		}
//
//	}
//	else
//	{
//		cout << "введите правильный диапозон" << endl;
//	}
//}
//Task4-1(рекурсия сумма чисел)
//int addNumbers(int n)
//{
//	if (n == 1) return 1; // выход из рекурсии
//	else return (n + addNumbers(n - 1));
//}
//int addNumbers(int n, int k)
//{	
//	if (n == k ) return 1;
//	else if(n<k)
//	{
//		return(k + addNumbers(k- 1) - addNumbers(n - 1));
//	}
//	else return(n + addNumbers(n - 1)- addNumbers(k - 1));	
//}
//int main() {
//	SetConsoleOutputCP(1251);
//	int a;
//	int b;
//	int s;
//	cout << "введите первое число" << endl;
//	cin >> a;
//	cout << "введите второе число" << endl;
//	cin >> b;
//	s = addNumbers(a, b);
//	cout <<  "сумма чисел" <<s<< endl;
//}
//Task4-2(алгоритм евклида)
//int gcd(int m, int n)
//{
//	if (n == 0) return m;
//	return gcd(n, m % n);
//}
//
//
//int main() {
//	SetConsoleOutputCP(1251);
//	int a;
//	int b;
//	int c;
//	cout << "введите первое число" << endl;
//	cin >> a;
//	cout << "введите второе число" << endl;
//	cin >> b;
//	c = gcd(a, b);
//	cout << "НОД" << c << endl;
//}
//Control Task1(площадь многоугольника через площади треугольников. координатный метод)
//double firstsquare(int x1,int y1, int x2, int y2, int x3, int y3) {
//	
//	double s1;
//	s1 = abs(x1 * y2 + x2 * y3 + x3 * y1  - x2 * y1 - x3 * y2 - x1 * y3) /static_cast<double>(2);
//
//	return s1;
//}
//
//
//int main() {
//		SetConsoleOutputCP(1251);
//		cout.precision(3);
//		double s1,s2,s3,sTotal;
//		s1=firstsquare(1,1,1,4,5,1);
//		s2 = firstsquare(1, 4, 1, 10, 5, 1);
//		s3 = firstsquare(1, 10, 7, 5, 5, 1);
//		cout << "Площадь первого треугольника равна:  " << fixed << setprecision(3)  << s1 << " квадратных литров\n";
//		cout << "Площадь второго треугольника равна:  " << fixed << setprecision(3) << s2 << " квадратных литров\n";
//		cout << "Площадь третьего треугольника равна:  " << fixed << setprecision(3) << s3 << " квадратных литров\n";
//		sTotal = s1 + s2 + s3;
//		cout << "Площадь всех треугольников равна:  "<< fixed<<setprecision(3) << sTotal << " квадратных литров\n"<<endl;
//}
// Control Task2(вычисление кубического корня двумя функциями)
//double standartFunc(int a) {
//	double res = pow(a, 1.0 / 3);
//	return res;
//}
//double IterFunc(int x)
//{
//
//	double yi;
//	double yifinal = 0;
//	//double x;
//		
//	yi = x;
//	while (1)
//	{
//		yifinal = (((x / (pow(yi, 2)) + 2 * yi))) / 3;
//		if (abs(yifinal - yi) <= 10e-5)
//		{
//			break;
//		}
//		else
//		{
//			yi = yifinal;
//		}
//		return yifinal;
//
//	}
//}
//
//int main()
//{
//			SetConsoleOutputCP(1251);
//			int a;
//			int b;
//			double res;
//			double res2 = 0.0;
//			cout << "введите  число" << endl;
//				cin >> a;
//				res = standartFunc(a);
//				cout << "кубический корень числа" << fixed << setprecision(3)  << res << endl;
//				cout << "введите  число" << endl;
//				cin >> b;
//				res2 = IterFunc(b);
//				cout << "кубический корень числа итерационая функция"  << res2 << endl;
//
//				//return 0;
//}
// Task3 (треугольники)
double trianglEqual(double a)
{
	double s;
	s = (sqrt(3) / 4) * (a * a);
	return s;
}
double trianglNonEqualSides(int b,int c, int d)
{
	double s;
	int p;
	p = (d + b + c) / 2;
	s = sqrt(p * (p - d) * (p - b) * (p - c));
	return s;
}
int main()
{
	SetConsoleOutputCP(1251);
	double a;
	double s;
	cout << "Введите длину стороны треугольника : ";
	cin >> a;
	s = trianglEqual(a);
	cout << "площадь равностороннего треугольника" << fixed << setprecision(2) << s << endl;
	double b,c,d,s1;
	cout << "\nВведите три стороны неравносторонего треугольника, стороны 1, 2,3 :\n";
	cin >> b;
	cin >> c;
	cin >> d;
	s1 = trianglNonEqualSides(b, c, d);
	cout << "площадь равностороннего треугольника" << fixed << setprecision(2) << s1 << endl;

}
 

// Task4(рекурсивная функция суммы ряда)
//int recursFunc(int n) {
//	if (n == 1)
//		return 5;
//	else
//		return recursFunc(n - 1) + (n * 5);
//
//}
//
//int main()
//{
//	SetConsoleOutputCP(1251);
//	int n;
//	int res;
//	cout << "введите  число N" << endl;
//	cin >> n;
//	res = recursFunc(n);
//	cout << "сумма ряда с числом N: " << res << endl;
//}




//Task5(перевод в двоичный код)
//void codRecursion(int a)
//{
//	int massiv[100], i=1,  b=0;
//	//cout << "Введите число : ";
//	//cin >> a;
//	b = a;
//	while (b != 0) {
//		massiv[i++] = b % 2;
//		b = b / 2;
//	}
//	cout << "введённое число в двоичном коде"<< massiv << endl;
//
//}
//
//
//	int a;
//	cout << "Введите число : ";
//	
//	cin >> a;
//	codRecursion(a);
//	
//	
//}




