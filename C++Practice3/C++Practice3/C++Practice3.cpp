
#include <iostream>
#include <windows.h>
#include <iomanip>
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
	
long double firBinSearch(double a, int n)
	{
		double L = 0;
		double R = a;
		while (R - L > 1e-10)
		{
			double M = (L + R) / 2;
			if (pow(M, n) < a)
			{
				L = M;
			}
			else
			{
				R = M;
			}
		}
		return R;
	}
	
int main()
{
	SetConsoleOutputCP(1251);
	double final=0;
	double digit=0;
	int sqrtDigit=0;
	int presision = 6;
	cout << "Введите основное  число от 1 до 1000" << endl;
	cin >> digit;
	if (1 <= digit&& digit<= 1000)
	{
		cout << "Введите значение степени корня от 1 до 10" << endl;
		cin >> sqrtDigit;
		if (1 <=sqrtDigit&& 10>= sqrtDigit)
		{
			final = firBinSearch(digit, sqrtDigit);
			cout << fixed << setprecision(6) << double(final) << endl;
		}
		else
		{
			cout << "введите правильный диапозон" << endl;
		}

	}
	else
	{
		cout << "введите правильный диапозон" << endl;
	}
}
//Task4

