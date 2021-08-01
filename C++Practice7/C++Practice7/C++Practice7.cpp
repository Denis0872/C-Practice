// C++Practice7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <math.h>


using namespace std;
//Task1,2
//struct Distance
//{
//    int feet;
//    double inches;
//    
//    void ShowDist()
//    {
//        cout << feet << "\'-" << inches << "\"\n";
//    }
//};
//
//Distance AddDist(Distance &d1, Distance &d2)
//{
//    Distance d;
//    d.feet = d1.feet + d2.feet;
//    d.inches = d1.inches + d2.inches;
//    if (d.inches >= 12.0)
//    {
//        d.inches -= 12.0;
//        d.feet++;
//    }
//    return d;
//}
//
//Distance InputDist()
//{
//    Distance d;
//    cout << "\nВведите число футов: ";
//    cin >> d.feet;
//    cout << "Введите число дюймов: ";
//    cin >> d.inches;
//    return d;
//}
//
//int main()
//{
//    SetConsoleOutputCP(1251);
//    Distance d1 = InputDist();
//    Distance d2 = { 1, 6.25 };
//    Distance d3 = AddDist(d1, d2);
//    d1.ShowDist();
//    d2.ShowDist();
//    d3.ShowDist();
//    int n;
//    cout << "Введите размер массива расстояний ";
//    cin >> n;
//    Distance* masDist = new Distance[n];
//    for (int i = 0; i < n; i++)
//    {
//       
//        masDist[i] = InputDist();
//      
//    }
//    delete[] masDist;
//        return 0;
//}
//Control Task1
struct Time
{
    int hours;
    int minutes;
    int seconds;

    int timeSec(const Time& time)
    {
        return time.hours * 3600 + time.minutes * 60 + time.seconds;
    }

    void showTime()
    {
        cout << "Часы: " << hours << ", минуты: " << minutes << ", секунды: " << seconds << endl;
    }

    Time summa(Time& t1, Time& t2)
    {
        Time sumTime;
        int SumSec = timeSec(t1) + timeSec(t2);
        sumTime.hours = SumSec / 3600;
        SumSec = SumSec % 3600;
        sumTime.minutes = SumSec / 60;
        sumTime.seconds = SumSec % 60;
        return sumTime;
    }

    Time razn(Time& t1, Time& t2)
    {
        Time RazTime;
        int RazSec = abs(timeSec(t1) - timeSec(t2));
        RazTime.hours = RazSec / 3600;
        RazSec = RazSec % 3600;
        RazTime.minutes = RazSec / 60;
        RazTime.seconds = RazSec % 60;
        return RazTime;
    }
};

Time inputTime()
{
    Time time;
    while (true)
    {
        cout << "Введите время в формате 00 00 00" << endl;
        cin >> time.hours >> time.minutes >> time.seconds;
        if ((time.hours < 0 || time.hours >=24) || (time.minutes < 0 || time.minutes >= 60) || (time.seconds < 0 || time.seconds >= 60))
        {
            cin.clear();
            cout << "Неверный формат времени." << endl;
        }
        else
        {
            break;
        }
    }
    return time;
}

int main()
{
    system("chcp 1251");
   

    cout << "Введите первое время: \n";
    Time t1 = inputTime();
    cout << "секунды: " << t1.timeSec(t1) << endl << endl;

    cout << "Введите второе время: \n";
    Time t2 = inputTime();
    cout << "секунды: " << t2.timeSec(t2) << endl;

    cout << endl;

    Time tSum = tSum.summa(t1, t2);
    cout << "Сумма интервалов времени: ";
    tSum.showTime();
    cout << endl;

    Time traz = traz.razn(t1, t2);
    cout << "Разница интервалов времени: ";
    traz.showTime();
    cout << endl;
}
//Control Task2
//struct Root
//{
//    double x1;
//    double x2;
//};
//
//Root getCoren(double a, double b, double c)
//{
//    Root r;
//    double d = b * b - 4 * a * c;
//    if (d > 0)
//    {
//        r.x1 = ((-b) + sqrt(d)) / (2 * a);
//        r.x2 = ((-b) - sqrt(d)) / (2 * a);
//        return r;
//    }
//    else if (d == 0)
//    {
//        r.x1 = r.x2 = (-b) / (2 * a);
//        return r;
//    }
//}
//
//void printCoren(Root r)
//{
//    if (r.x1)
//    {
//        if (r.x1 != r.x2)
//        {
//            cout << "Корни уравнения:\n";
//            cout << "корень1 = " << r.x1 << ", корень2 = " << r.x2 << endl;
//        }
//        else
//        {
//            cout << "Единственный корень квадратного уравнения:\n";
//            cout << "x = " << r.x1 << endl;
//        }
//    }
//    else
//    {
//        cout << "Корней нет.\n";
//    }
//}
//
//int main()
//{
//    system("chcp 1251");
//  
//
//    double a, b, c;
//
//    cout << "Введите коэффициены квадратного уравнения:" << endl;
//    cin >> a >> b >> c;
//
//    printCoren(getCoren(a, b, c));
//}

