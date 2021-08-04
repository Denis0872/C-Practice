#include <iostream>
#include "ClassFile.h"
#include <windows.h>
#pragma once

using namespace std;

Time::Time()
{
    Time::set_hours(0);
    Time::set_minutes(0);
    Time::set_seconds(0);
}
Time::Time(int h, int m,int s)
{
    while (s >= 60)
    {
        s -= 60;
        m++;
    }
    while (m >= 60)
    {
        m -= 60;
        h++;
    }
    Time::set_hours(h);
    Time::set_minutes(m);
    Time::set_seconds(s);
  
   

}
void Time::ShowTime()
{
    cout <<"Showtime" <<Time::getHours() << ":" << Time::getMinuts() << ":" << Time::getSeconds() << endl;
}
void Time::SumTime(Time& t1, Time& t2)
{
    int h, m, s;
    h = t1.getHours() + t2.getHours();
    m = t1.getMinuts() + t2.getMinuts();
    s = t1.getSeconds() + t2.getSeconds();
    if (s > 59)
    {
        s -= 60;
        m++;
    }
    if (m > 59)
    {
        m -= 60;
        h++;
    }
    Time::set_hours(h);
    Time::set_minutes(m);
    Time::set_seconds(s);
}
void Time::set_hours(int h) { Time::hours = h; }
void Time::set_minutes(int m) { Time::minutes = m; }
void Time::set_seconds(int s) { Time::seconds = s; }


int Time:: getHours() { return Time::hours; }
int Time::getMinuts() { return Time::minutes; }
double Time::getSeconds() { return Time::seconds; }

