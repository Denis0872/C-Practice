#include <math.h>
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    system("chcp 1251");
    //Task1-1
    //int x, y, rad=0;
    //cout << "\nВведите радиус фигуры:\n";
    //cin >> rad;
    //cout << "\nВведите x и y:\n";
    //cin >> x;
    //cin >> y;
    //if (x * x + y * y < rad * rad && y > 0) {
    //    cout << "Внутри" << endl;
    //}
    //   
    //else if (x * x + y * y > rad * rad || y < 0) {
    //    cout << "Снаружи" << endl;
    //}
   
    //else {
    //    cout << "на границе" << endl;
    //}
    //Task1-2

    /*char op;
    cout << "сделай свой выбор, собери авто свой мечты: нажми букву s если выбираешь радил+круглые колёса и мощный движ либо букву v если треба ещё и кондей ";
    cin >> op;
   
    switch (op)
    {
    case 'v':
            cout << "кондиционер хочу\n";

    case 's':
        cout << "радио играть должно\n";
   
    default:
        cout << "колеса круглые\n";
        cout << "мощный двигатель\n";
    }*/
    //Task2-1
   /* double x, x1, x2, y;
    cout << "\nВведите первую границу интервала x1\n";
    cin >> x1;
    
    
    cout << "\nВведите вторую границу интервала x2\n";
    cin >> x2;
    
    cout << "\tx\tsin(x)\n";
    x = x1;
    do
    {
        y = sin(x);
        cout << "\t" << x << "\t" << y << endl;
        x = x + 0.01;
    } while (x <= x2);
    return 0;*/
    ////Task2-2
    //int a, b, temp;
    //cout << "Введите значение a  "; 
    //cin >> a;
    //cout << "Введите значение b "; 
    //cin >> b;

    //while (a != b)
    //{
    //    if (a > b)
    //        a -= b; 
    //    else
    //        b -= a;
    //}
    //
    //    cout << "НОД = " << a << endl;
    //Task2-3
 /*   double x, x1, x2, y;
    cout << "\nВведите первую границу интервала x1\n";
    cin >> x1;
    cout << "\nВведите вторую границу интервала x2\n";
    cin >> x2;
    cout << "\tx\tsin(x)\n";
    x = x1;
    while (x <= x2)
    {
        y = sin(x);
        cout << "\t" << x << "\t" << y << endl;
        x = x + 0.01;
    }
    int a, b;
   cout << "введите значение a  "; 
   cin >> a;
   cout << "введите значение b "; 
   cin >> b;

   do
   {
       if (a > b)
           a -= b; 
       else
           b -= a;
   } while (a != b);
   
       cout << "нод = " << a << endl;*/
    //Task3
   //srand(time(NULL));
   //int a, b, c;
   //int k = 0, n = 5;
   //for (int i = 1;i <= n;i++) {
   //    a = rand() % 10 + 1; b = rand() % 10 + 1;
   //    cout << a << " * " << b << " = ";
   //    cin >> c;
   //    if (a * b != c)
   //    {
   //        k++; 
   //        cout << "Error! ";
   //        cout << a << " * " << b << " = " << a * b << endl;
   //    }

   //}
   //cout << "Count error: " << k << endl;
   //return 0;
    //Task4

    //int k, m, s=0;
    //cout << "введите значение k  ";
    //cin >> k;
    //cout << "введите значение m  ";
    //cin >> m;
    //for (int i = 1;i <= 100;i++)
    //{
    //    if ((i > k) && (i < m))
    //        continue;
    //    s += i;

    //}
    //cout << "Сумма: " << s << endl;
//ControlTask1(високосный год)
    /* int year;
     cout << "введите  год  ";
     cin >> year;   
         
             if (((year % 4 == 0)&&(year % 100 != 0)) || (year % 400 == 0))
             
                 cout << "год високосный  ";
             else            
                cout << "год не високосный  ";                                 
     return 0;*/
     //ControlTask2(наибольшее из трёх чисел)
  /* int chislo1, chislo2, chislo3;
    cout << "введите первое число  ";
    cin >> chislo1;
    cout << "введите второе число  ";
    cin >> chislo2;
    cout << "введите третье число  ";
    cin >> chislo3;

    if (chislo1 > chislo2&&chislo2>chislo3)   
        cout << "самое большое  " << chislo1 << endl;
    if (chislo2 > chislo3 && chislo3 > chislo1)
        cout << "самое большое  " << chislo2 << endl;            
    else      
            cout << "самое большое  " << chislo3 << endl;
    return 0;*/
    //ControlTask3(размен монет)
 /*   int onecop = 1;
    int twocop = 2;
    int fivecop = 5;
    int tencop = 10;
    int twentycop = 20;
    int summapodrazmen=0;
    int count_onecop = 0;
    int count_twocop = 0;
    int count_fivecop = 0;
    int count_tencop = 0;
    int count_twentycop = 0;

    cout << "введите сумму, которую вы хотите разменять  ";
    cin >> summapodrazmen;
    while (summapodrazmen<0)
    {
        cout << "введите не отрицательную сумму";
    }
    while (summapodrazmen > 0)
    {
        if (summapodrazmen - twentycop >= 0) {
            summapodrazmen -= twentycop;
            count_twentycop += 1;
        }
        else if ((summapodrazmen - twentycop < 0) && (summapodrazmen - tencop >= 0)) {
            summapodrazmen -= tencop;
            count_tencop += 1;
        }
        else if ((summapodrazmen - tencop < 0) && (summapodrazmen - fivecop >= 0)) {
            summapodrazmen -= fivecop;
            count_fivecop += 1;
        }
        else if ((summapodrazmen - fivecop < 0) && (twocop >= 0)) {
            summapodrazmen -= twocop;
            count_twocop += 1;
        }
        else if (twocop < 0) {
            summapodrazmen -= onecop;
            count_onecop += 1;
        }
    }
    cout << "20 копеек = " << count_twentycop << endl;
    cout << "10 копеек = " << count_tencop << endl;
    cout << "5 копеек = " << count_fivecop << endl;
    cout << "2 копейки = " << count_twocop << endl;
    cout << "1 копейка = " << count_onecop << endl;*/
    //ControlTask4(стрельба по мишени)
    int centerx = 0;
    int centery = 0;
    int shootx=0;
    int shooty=0;
    int countx;
    int county;
    int count;
    int summ;
    int average;
    centerx = rand() % 10 + 1; centery = rand() % 10 + 1;
    cout << "Координаты цента мишени: \n" << endl;
    cout << centerx << "координата X\n"  << centery << "Координата Y \n" << endl;
    int n;
    int i;
    cout << "\nвведите количество выстрелов ";
    cin >> n;
    for (i = 0;i < n;i++)
    {
        cout << "\nвведите координаты выстрела х ";
        cin>> shootx;
        cout << "\nвведите координаты выстрела y ";
        cin>> shooty;
        countx = abs(shootx - centerx);
        county = abs(shooty - centery);
        if (abs(shootx-centerx)>abs(shooty-centery))
        {
            cout << "\nВы набрали  "<< countx<<" баллов"<< endl;
            countx += countx;
        }
        else {
            cout << "\nВы набрали" << county<< " баллов" << endl;
            county += county;
        }
        count = countx + county;
        average = count / n;

    }
    cout << "\nКоличество выстрелов: " << n <<   endl;
    cout << "\nИтого баллов: " << count << endl;
    cout << "\nИтого средний балл: " << average << endl;
    if(average < 3) {
        cout << "\nВы снайпер "  << endl;
    }
    if (average > 7) {
        cout << "\nВы новичок " << endl;
    }


    else{
        cout << "\nВы средний стрелок " << endl;
    }

    return 0;
}

