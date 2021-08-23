#include <windows.h>
#include <string>
#include <map>
#include <iostream>
#include "../../../../Desktop/ITMO/С++/Demo_source_C++/Lab_STL/IdCard.h"
#include "../../../../Desktop/ITMO/С++/Demo_source_C++/Lab_STL/Group.h"
#include "../../../../Desktop/ITMO/С++/Demo_source_C++/Lab_STL/student.h"






using namespace std;
struct StudentMarks
{

    string namestudent;
    int markStudent;

};
map <string, char> studentPairs;
void addMark(StudentMarks sm);
void showMap();

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    StudentMarks student[] =
    {
{ "Васечкин", '1' },{ "Кораблёв", '2' },{ "Пупкин", '3' },{ "Ложкин", '4' },{ "Даралеев", '1' },{ "Охапкин", '2' },{ "Кораблёв", '3' }
    };
    for (int i = 0; i < sizeof(student) / sizeof(student[0]); i++)
    {
        addMark(student[i]);
    }

    showMap();

    return 0;


    //
    //    string name;
    //    string last_name;
    //    IdCard* idc = new IdCard(123456, "Базовый");
    //    IdCard* idc2 = new IdCard(654321, "Базовый");
    //
    //    cout << "Name: ";
    //    getline(cin, name);
    //
    //    // Ввод фамилии
    //    cout << "Last name: ";
    //    getline(cin, last_name);
    //    Student* student02 = new Student(name, last_name, idc);
    //
    //    Student student03("Петр", "Петров", idc2);
    //    Student student04("Семен", "Яковлев", idc);
    //    Student student05("Саша", "Коен", idc2);
    //    Student student06("Дмитрий", "Ионов", idc);
    //
    //    Group gr1957("1957");
    //    //gr1957.addStudent(student02);
    //    gr1957.addStudent(student03);
    //    gr1957.addStudent(student04);
    //    gr1957.addStudent(student05);
    //    gr1957.addStudent(student06);
    //   
    //   //gr1957.delStudent(student04);
    //int k = gr1957.getSize();
    //     gr1957.GroupSort();
    //    cout << "В группе " << gr1957.getName() << " " << k << " ст." << endl;
    //    gr1957.GroupOut();
    //    int scores[5];
    //    int sum = 0;
    //    for (int i = 0; i < 5; ++i) {
    //        cout << "Score " << i + 1 << ": ";
    //        cin >> scores[i];
    //        // суммирование
    //        sum += scores[i];
    //    }
    //    student02->set_scores(scores);
    //    double average_score = sum / 5.0;
    //    student02->set_average_score(average_score);
    //
    //    cout << "Average ball for " << student02->get_name() << " "
    //        << student02->get_last_name() << " is "
    //        << student02->get_average_score() << endl;
    //  cout << "IdCard: " << student02->getIdCard().getNumber() << endl;
    //    cout << "Category: " << student02->getIdCard().getCategory() << endl;
    //
    //    delete student02;
    //    return 0;
}
void showMap()
{
    for (auto iter = studentPairs.begin(); iter != studentPairs.end(); ++iter)
    {
        cout << "ключ " << iter->first<<"  " << " значение " << iter->second << endl;
    }
}

void addMark(StudentMarks sm)
{
    if (studentPairs.find(sm.namestudent) == studentPairs.end())
    {
        studentPairs.insert(pair<string, char>(sm.namestudent, sm.markStudent));
        cout << "Студент добавлен.  " << sm.namestudent << endl;
    }
    else
    {
        cout << "Студент уже существует.  " << sm.namestudent << endl;
    }
}

