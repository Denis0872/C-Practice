#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Point
{
private:
    double x;
    double y;
public:
    Point(double x1, double y1) : x(x1), y(y1) { }

    double Distance()
    {
        return sqrt(pow(x - 0, 2) + pow(y - 0, 2));
    }
    friend ostream& operator<< (ostream& out, Point& a);
};

ostream& operator<< (ostream& out, Point& coord)
{
    out << "Point(" << coord.x << ", " << coord.y << ") = " << coord.Distance();
    return out;
}

bool operator< (Point& x, Point& y)
{
    return x.Distance() < y.Distance();
}