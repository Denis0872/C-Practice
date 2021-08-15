#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;
public:
    Time() : hours(0), minutes(0), seconds(0) {}
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    void set_time()
    {
        cout << "Время" << endl;
        cout << "Часы: ";
        cin >> hours;
        cout << "Минуты: ";
        cin >> minutes;
        cout << "Секунды: ";
        cin >> seconds;
        while (seconds >= 60)
        {
            seconds -= 60;
            minutes++;
        }
        while (minutes >= 60)
        {
            minutes -= 60;
            hours++;
        }
    }

    void ShowTime()
    {
        cout << hours << ":" << minutes << ":" << seconds;
    }

    Time operator+ (const Time&) const;
    Time operator- (const Time&) const;
    Time operator+ (const float&) const;
    friend bool operator== (const Time& a, const Time& b);
    friend Time operator+ (const float a, const Time& b);
    friend bool operator> (const Time& a, const Time& b);
    friend bool operator< (const Time& a, const Time& b);
    friend bool operator>= (const Time& a, const Time& b);
    friend bool operator<= (const Time& a, const Time& b);
    
};

Time Time::operator+ (const Time& t) const
{
    int h = hours + t.hours;
    int m = minutes + t.minutes;
    int s = seconds + t.seconds;
    if (s >= 60)
    {
        s -= 60;
        m++;
    }
    if (m >= 60)
    {
        m -= 60;
        h++;
    }
    return Time(h, m, s);
}
Time Time::operator+ (const float& t) const
{
    int h = hours;
    int m = minutes;
    int s = seconds + ceil(t * 60);
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
    return Time(h, m, s);
}
Time operator+ (float value, const Time& t)
{
    int h = t.hours;
    int m = t.minutes;
    int s = t.seconds + ceil(value * 60);
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
    return Time(h, m, s);
}
bool operator> (const Time& t1, const Time& t2)
{
    return (t1.hours * 3600 + t1.minutes * 60 + t1.seconds) > (t2.hours * 3600 + t2.minutes * 60 + t2.seconds);
}
bool operator< (const Time& t1, const Time& t2)
{
    return (t1.hours * 3600 + t1.minutes * 60 + t1.seconds) < (t2.hours * 3600 + t2.minutes * 60 + t2.seconds);
}
bool operator>= (const Time& t1, const Time& t2)
{
    return (t1.hours * 3600 + t1.minutes * 60 + t1.seconds) >= (t2.hours * 3600 + t2.minutes * 60 + t2.seconds);
}
bool operator<= (const Time& t1, const Time& t2)
{
    return (t1.hours * 3600 + t1.minutes * 60 + t1.seconds) <= (t2.hours * 3600 + t2.minutes * 60 + t2.seconds);
}
bool operator== (const Time& t1, const Time& t2)
{
    return (t1.hours * 3600 + t1.minutes * 60 + t1.seconds) == (t2.hours * 3600 + t2.minutes * 60 + t2.seconds);
}

Time Time::operator- (const Time& t) const
{
    int h = 0;
    int m = 0;
    int s = abs((hours * 3600 + minutes * 60 + seconds) - (t.hours * 3600 + t.minutes * 60 + t.seconds));
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
    return Time(h, m, s);
}