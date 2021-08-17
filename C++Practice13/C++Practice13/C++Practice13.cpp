#include <string>
#include <sstream>
#include <iostream>
#include "Item.cpp"
#include <vector>
#include "human.h"
#include "student.h"
#include "teacher.h"

using namespace std;

int main()
{
    system("chcp 1251");
    vector<int> scores;
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(4);
    scores.push_back(4);
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);
    student* stud = new student("Кораблёв", "Иван", "Иванович", scores);
    cout << stud->get_full_info() << endl;
    //cout << "Средний балл :" << stud->get_average_score() << std::endl;
    unsigned int teacher_work_time = 40;
    teacher* tch = new teacher("Парусов", "Дмитрий", "Петрович", teacher_work_time);

    cout << tch->get_full_info() << endl;
   // cout << "Количество часов: " << tch->get_work_time() << endl;
    human* hm = new human("Рыбьев", "Пётр", "Фомич");
    cout << hm->get_full_info() << endl;

   /* Item* pubarr[100];
    int n = 0;
    char choice;
    do
    {
        cout << "\nВводить данные для книги или звукового файла(b / a) ? ";
        cin >> choice;
        if (choice == 'b')
            pubarr[n] = new Paperbook;
        else if (choice == 'a')
            pubarr[n] = new AudioBook;
        else
            pubarr[n] = new Item;

            pubarr[n++]->getdata();
        cout << "Продолжать((у / n) ?" ;
        cin >> choice;
    } while (choice == 'y');
    for (int j = 0; j < n; j++)
        pubarr[j]->putdata(); 
    cout << endl;
    return 0;*/
}

