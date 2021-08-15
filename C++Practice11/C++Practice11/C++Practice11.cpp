

//#include <iostream>
//#include <string>
//#include <vector>
//#include "Distance.h"
//#include "StudentGrade.h"

//int main()
//{
//	/*GradeMap grades;
//	grades["John"] = 'A';
//	grades["Martin"] = 'B';
//	cout << "John has a grade of " << grades["John"] << endl;
//	cout << "Martin has a grade of " << grades["Martin"] << endl;
//	cout << "New name and grade?" << endl;
//	string name;
//	char grade;
//	cin >> name >> grade;
//	grades[name] = grade;
//	std::cout << name << " has a grade of " << grades[name] << endl;
//	return 0;*/
//	/*
//	system("chcp 1251");
//	Distance  dist2, dist3, dist4, dist5;
//	Distance dist1 = 2.35F;
//	float mtrs;
//	float mtrs1=2;
//	mtrs = static_cast<float>(dist1)+mtrs1;	
//	cout << mtrs;
//*/
//
//	//dist1.getdist();
//	//dist2.getdist();
//	//dist3 = dist1 + dist2;
//	//dist3.showdist();
//	//dist4 = dist1 + dist2 + dist3;
//	//dist4.showdist();
//	//dist5 = dist4 - dist3;
//	//dist5.showdist();
//	//cout << "\ndist1 ="  << dist1;
//
//}
////Control Task2
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//#include "Point.h"
//
//using namespace std;
//
//
//int main()
//{
//    vector<Point> v;
//    v.push_back(Point(1, 2));
//    v.push_back(Point(10, 12));
//    v.push_back(Point(21, 7));
//    v.push_back(Point(4, 8));
//
//    sort(v.begin(), v.end());
//    for (auto& point : v)
//        cout << point << "\n";
//    return 0;
//}
//Control Task1
#include <iostream>
#include <cmath>
#include "Time.h"

using namespace std;
int main()
{
    system("chcp 1251");
    system("cls");
    Time t1, t2, t3;
    t1.set_time();
    t2.set_time();
    cout << "\nВремя первое: ";
    t1.ShowTime();
    cout << "\nВремя второе: ";
    t2.ShowTime();
    cout << endl;
    t3 = t1 + t2;
    cout << "\nСумма  Time: ";
    t3.ShowTime();
    t3 = t1 - t2;
    cout << "\nРазность  Time: ";
    t3.ShowTime();

    cout << "\nВвод переменной  типа float: ";
    float a;
    cin >> a;
    t3 = t1 + a;
    t1.ShowTime();
    cout << " + " << a << " = ";
    t3.ShowTime();
    cout << endl;

    t3 = a + t1;
    cout << a << " + ";
    t1.ShowTime();
    cout << " = ";
    t3.ShowTime();
    cout << endl;

    cout << "\nСравнение Time-1 и Time-2\n";
    t1.ShowTime();
    cout << " > ";
    t2.ShowTime();
    cout << " = ";
    if (t1 > t2) cout << "Time-1 больше"; else cout << "Time-2 больше" << endl;
    t1.ShowTime();
    cout << " < ";
    t2.ShowTime();
    cout << " = ";
    if (t1 < t2) cout << "Time-1 меньше"; else cout << "Time-2 меньше" << endl;
    cout << endl;
    t1.ShowTime();
    cout << " >= ";
    t2.ShowTime();
    cout << " = ";
    if (t1 >= t2) cout << "Time-1 больше или равен"; else cout << "Time-2 больше или равен" << endl;
    cout << endl;
    t1.ShowTime();
    cout << " <= ";
    t2.ShowTime();
    cout << " = ";
    if (t1 <= t2) cout << "Time-1 меньше или равен"; else cout << "Time-2 меньше или равен" << endl;
    cout << endl;
    t1.ShowTime();
    cout << " == ";
    t2.ShowTime();
    cout << " = ";
    if (t1 == t2) cout << "Time-1 равен Time-2 "; else cout << "Time-1 не равен Time-2" << endl;
    
}
