#pragma once
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;
public:
    Time();
    Time(int,int,int);
  
    int getHours();
    int getMinuts();
    double getSeconds();
    void set_hours(int);
    void set_minutes(int);
    void set_seconds(int);
    void ShowTime();
    void SumTime(Time&, Time&);

};
