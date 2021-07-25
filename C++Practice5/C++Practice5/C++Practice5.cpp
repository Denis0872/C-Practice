// C++Practice5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <vector>

using  namespace std;
//void show_array(const int Arr[], const int N);
//bool from_min(const int a, const int b);
//bool from_max(const int a, const int b);
//void bubble_sort(int Arr[], const int N, bool (*compare)(int a, int b));

int main()
{

    SetConsoleOutputCP(1251);
   // task1 Обработка данных массива
    //const int n = 5;
    //double middle=0; 
    //int mas[n];
    //int max ;
    //int min;
    //int i_min=0;
    //int i_max=0;
    //int proizv=0;

    //for (int i = 0; i < n; i++)
    //{
    //    cout << "mas[" << i << "]=";
    //    cin >> mas[i];
    //}
    //int s = 0, sposit = 0, snegat = 0, schet = 0, snechet = 0;
    //
    //for (int i = 0; i < n; i++)
    //{
    //    s += mas[i];
    //    middle = s / static_cast<double>(n);
    //}
    //for (int i = 0; i < n; i++)
    //{

    //    if (mas[i] > 0) {
    //    sposit += mas[i];
    //    }
    //    else
    //    snegat += mas[i];            
    //}
    //for (int i = 0; i < n; i+=2)
    //{
    //   cout << mas[i] << "чётный индекс "<<endl;
    //   schet += mas[i];       
    //}
    //for (int i = 1; i < n; i += 2)
    //{
    //    cout << mas[i] << "нечётный индекс " << endl;
    //    snechet += mas[i];
    //}
    //for (int i = 0; i < n; i++) {
    //    max = mas[0];
    //    if (mas[i] > max) {
    //        max =mas[i] ;
    //        i_max = i;
    //         }  
    //}
    //for (int i = 0; i < n; i++) {
    //    min = mas[0];
    //    if (mas[i] < min) {
    //        min = mas[i];
    //        i_min = i;
    //    }
    //}
    //
    //if (i_min < i_max) {

    //    proizv = mas[i_min];
    //    for (int i = i_min; i <= i_max;i++) {
    //        
    //        proizv *= mas[i];

    //    }

    //    //cout << proizv << "произведение " << endl;

    //}
    //else
    //proizv = mas[i_max];
    //    for (int i = i_max; i <= i_min;i++) {
    //       
    //        proizv *= mas[i];

    //    }
    //
    //
    //cout << s << "-сумма числе массива" <<middle<< "среднее число в массиве" << endl;
    //cout << sposit << "  -сумма положительных чисел" << snegat << "  -сумма отрицательных чисел" << endl;
    //cout << schet << "  -сумма чисел с чётными индексами" << snechet << "  -сумма чисел с нечётными индексами" << endl;
    //
    //cout << max<<" максимальный элемент массива\n" << min << " минимальный элемент массива\n" << endl;
    //cout << i_min << "минимальный индекс" << i_max << "максимальный индекс " << endl;
    //cout << proizv << "произведение " << endl;
    //Task2 Сортировка массива
   /* const int N = 10;
    int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
    int min = 0; 
    int buf = 0; 
    for (int i = 0; i < N; i++)
    {
        min = i; 
        for (int j = i + 1; j < N; j++)
            min = (a[j] < a[min]) ? j : min;
        
        if (i != min)
        {
            buf = a[i];
            a[i] = a[min];
            a[min] = buf;
        }
    }
    for (int i : a)
        cout << i << '\t';*/
//Task3 Использование указателя на функцию
//    bool (*from_f[2])(int, int) = { from_min,from_max };
//     const int N = 10;
//     int my_choose = 0;
//     
//         int A[N] = { 9,8,7,6,1,2,3,5,4,9 };
//     cout << "1. Сортировать по возрастанию\n";
//     cout << "2. Сортировать по убыванию\n";
//     cin >> my_choose;
//     cout << "Исходные данные: ";
//     
//     show_array(A, N);
//     bubble_sort(A, N, (from_f[my_choose - 1]));
//     /*switch (my_choose)
//     {
//     case 1: bubble_sort(A, N, from_min); break;
//     case 2: bubble_sort(A, N, from_max); break;
//     default: cout << "\rНеизвестная операция ";
//     }*/
//    
//    show_array(A, N);
//return 0;
//}
//void show_array(const int Arr[], const int N)
//{
//    for (int i = 0; i < N; i++)
//        cout << Arr[i] << " ";
//    cout << "\n";
//}
//bool from_min(const int a, const int b)
//{
//    return a > b;
//}
//bool from_max(const int a, const int b)
//{
//    return a < b;
//}
//void bubble_sort(int Arr[], const int N, bool (*compare)(int a, int b))
//{
//    for (int i = 1;i < N;i++)
//    {
//        for (int j = 0;j < N - 1;j++)
//            
//        {
//            if ((*compare)(Arr[j], Arr[j + 1])) swap(Arr[j], Arr[j + 1]);
//        }
//    }
//Task4  реализация динамического массива
//int n;
//cout << "Введите количество чисел, которое вы хотите ввести: ";
//cin >> n;
// int* myArray = new int[n];
// for (int i = 0; i < n; i++)
//    {
//        cout << "mas[" << i << "]=";
//        cin >> myArray[i];
//    }
// for (int i = 0; i < n; i++)
// {
//     cout << "mas[" << i << "]= ";
//     cout<< myArray[i]<<" \n";
// }
// cout <<  myArray<< " " <<&myArray  ;
//
// delete[]myArray;
 //Task5 -1 Сохранение результатов в массиве
//srand(time(NULL)); 
//int a, b, c;
//int k = 0;
//const int n = 3; int mas[n]{};
//for (int i = 0; i < n;i++) 
//{
//    a = rand() % 10 + 1; b = rand() % 10 + 1;
//    cout << a << " * " << b << " = ";
//    cin >> c;
//    mas[i] = c;
//  
//    if (a * b != c)
//    {
//        k++;
//        cout << "Error! ";
//        cout << a << " * " << b << " = " << a * b << endl;
//    }
//    cout << "\nAll: \n";
//
//    
//}
//for (int i = 0; i < n; i++)
//    { cout <<  mas[i]<< " мой ответ  "<< i+1 <<" \n" << ends; }
//Task5 -2  Сохранение набора результатов неизвестного размера
 /*   const int n = 5;
    int mas[n];
    srand(time(NULL));
    int a, b, c;
    int k = 0;
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < n;i++)
        {
            a = rand() % 10 + 1; b = rand() % 10 + 1;
            cout << a << " * " << b << " = ";
            cin >> c;
            mas[i] = c;
          
            if (a * b != c)
            {
                v2.push_back(c);
                k++;
            }
            else { v1.push_back(c); }
        
            
        }
    cout << "\nGood: \n"; 
    for (int i = 0; i < v1.size(); i++) 
    { cout << v1[i] << " \n"<<ends; }
    cout << "\nBad: \n";
    for (int i = 0; i < v2.size(); i++)
    { cout << v2[i] <<" \n" << ends; }*/
//Control Task1
    void arraySummaChisel(const int Arr[], const int N);
    void positNegatChisla(const int Arr[], const int N);
    void chetIndex(const int Arr[], const int N);
    void NeChetIndex(const int Arr[], const int N);
    void IndexMaxChisla(const int Arr[], const int N);
    void IndexMinChisla(const int Arr[], const int N);
    void ProizvMezduMaxMin(const int Arr[], const int N);
    int n = 5;
    int mas[]={1,2,3,4, -3};
    arraySummaChisel(mas, n);
    positNegatChisla(mas, n);
    chetIndex(mas, n);
    NeChetIndex(mas, n);
    IndexMaxChisla(mas, n);
    IndexMinChisla(mas, n);
    ProizvMezduMaxMin(mas, n);
}
void arraySummaChisel(const int Arr[], const int N) {
            double middle;
            int s=0;
    for (int i = 0; i < N; i++)
        {
            
            s += Arr[i];
            middle = s / static_cast<double>(N);
            
        }
            cout << s << "сумма чисел" << endl;
            cout << middle << "среднее число" << endl;
}
void positNegatChisla(const int Arr[], const int N)
{
    int sposit = 0;
    int snegat = 0;

    for (int i = 0; i < N; i++)
        {

            if (Arr[i] > 0) {
            sposit += Arr[i];
            }
            else
            snegat += Arr[i];            
        }
    cout << sposit << "сумма положительных чисел" << endl;
    cout << snegat << "сумма отрицательных чисел" << endl;
}
void chetIndex(const int Arr[], const int N) {
    int schet = 0;
    for (int i = 0; i < N; i += 2)
        {
           cout << Arr[i] << "чётный индекс "<<endl;
           schet += Arr[i];       
        }

}
void NeChetIndex(const int Arr[], const int N) {
    int nechet = 0;
    for (int i = 1; i < N; i += 2)
    {
        cout << Arr[i] << "нечётный индекс " << endl;
        nechet += Arr[i];
    }
}
int max1;
int i_max=0;
void IndexMaxChisla(const int Arr[], const int N) {
     
    for (int i = 0; i < N; i++) 
    {
            max1 = Arr[0];
            if (Arr[i] > max1)
            {
                max1 =Arr[i] ;
                i_max = i;
            } 
    }
cout << i_max << "индекс максимального числа" << endl;
}
int min1;
 int i_min = 0;
void IndexMinChisla(const int Arr[], const int N) {
   
    for (int i = 0; i < N; i++)
    {
        min1 = Arr[0];
        if (Arr[i] < min1)
        {
            min1 = Arr[i];
            i_min = i;
        }
    }
    cout << i_min << "индекс минимального числа" << endl;
}
void ProizvMezduMaxMin(const int Arr[], const int N) {
    int proizv = 0;
    if (i_min < i_max) {

            proizv = 1;
            for (int i = i_min; i <= i_max;i++) {
                
                proizv *= Arr[i];

            }

            cout << proizv << "произведение чисел между максимальным и минимальным индексом " << endl;
        }
        else
        proizv = 1;
            for (int i = i_max; i <= i_min;i++) {
               
                proizv *= Arr[i];

            } 
    cout << proizv << "произведение чисел между максимальным и минимальным индексом" << endl;
}
