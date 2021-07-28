#include <stdio.h> 
#include <iostream>
#include <fstream>
#include <iostream>
#include <windows.h>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    system("chcp 1251");
    SetConsoleOutputCP(1251);
    /*int sum = 0;
    int const n = 100;
    int numss[n];
    for (int i = 0; i < n; i++)
    {
        numss[i] = (rand() % 100);
        cout << numss[i]<< " ";

    }
    cout  << " \n";
    ofstream out("ofstr.txt", ios::out | ios::binary);
    if (!out) {
        cout << "connection impossible\n";
        return 1;
    }



    int nums[4] = { 1, 2, 3, 4 };
    out.write((char*)nums, sizeof(nums));
    out.close();
    ifstream in("ofstr.txt", ios::in | ios::binary);
    if (!in) {
        cout << "insert impossible\n";
        return 1;
    }
    in.read((char*)&nums, sizeof(nums));
    int k = sizeof(nums) / sizeof(int);
    for (int i = 0; i < k; i++)
    {
        sum = sum + nums[i];
        cout << nums[i] << ' ';
    }
    cout << "\nsum =\n " << sum << endl;
    ofstream fout("ofstr.txt");
    fout << sum;

    //in.close();*/
    //ofstream fout1("ofstr.txt", ios::app);
    //char c[256];
    ///*fout1 << "line #1!" << endl;
    //fout1 << "line #2!" << endl;*/
    ////string text1;
    //cout << "введите текст" << endl;
    //cin >> c;
    //fout1 << c;
    //fout1.close();
    //ifstream foat("ofstr.txt");
    //if (!foat)
    //{
    //    cerr << "No" << endl;
    //    exit(1);
    //}
    //while (foat)
    //{
    //    string strInput;
    //    getline(foat, strInput);
    //    cout << strInput << endl;
    //}
    //return 0;
    //ControlTask1
//    void zapis_file(const string & filename, const string & text);
//
//        string text;
//        getline(cin, text);
//        zapis_file("ofstr.txt", text);
//        return 0;
//    }
//
//void zapis_file(const string& filename, const string& text)
//    {
//        ofstream out(filename, ios::in | ios::trunc);
//        if (!out.is_open())
//        {
//            cout << "файл не найден" << endl;
//        }
//        out << text;
//        out.close();
//    }
//ControlTask2
    const int N = 11;
    int a[N] = { 1, 7, 4, 7, 2, 8, 9, 1, 0, 3, 6 };
    
    cout << "Исходный массив: ";
    ofstream out("ofstr.txt");
    for (int i = 0; i < N; i++)
    {
        out << a[i] << " ";
        cout  << a[i];
    }
    int min = 0;
    int buf = 0;

    for (int i = 0; i < N; i++)
    {
        min = i;
        for (int j = i + 1; j < N; j++)
        {
            min = (a[j] < a[min]) ? j : min;
            if (i != min)
            {
                buf = a[i];
                a[i] = a[min];
                a[min] = buf;
            }
        }
    }
    cout << "\nСортированный массив по методу пузырьковой сортировки: ";
    if (out.is_open())
    {
        for (int i = 0;i < N; i++)
        {
            out << a[i] << " ";
            cout << a[i];
        }
    }

    
    out.close();
    return 0;
}

