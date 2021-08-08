#pragma once
#include <iostream>
#include "ClassFile.h"
#include <windows.h>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;
public:
    Time();
    Time(int, int, int);
    int array[3];
    int getHours();
    int getMinuts();
    double getSeconds();
    void set_hours(int);
    void set_minutes(int);
    void set_seconds(int);
    void ShowTime();
    void SumTime(Time&, Time&);
    int quotient(int array[])
        {
        int i;
            for (i = 0; i < 3; i++)
            {
                if (array[i] < 0|| array[0]>24||array[1]>59||array[2]>59)
                    throw IncorrectEnter();
               // break;
            }
            return* array;    
         };
    class IncorrectEnter
        {
        public: IncorrectEnter() : message("") { }
              void printMessage() const { cout << message << endl; }
        private: string message;
        };
};