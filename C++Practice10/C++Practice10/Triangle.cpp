#include "Dot.h"
#include "Triangle.h"
#include <iostream>
#include <cmath>

using namespace std;

Triangle::Triangle(Dot* side1, Dot* side2, Dot* side3)
{
	a = side1;
	b = side2;
	c = side3;
}
Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3)
{
	a = new Dot(x1, y1);
	b = new Dot(x2, y2);
	c = new Dot(x3, y3);
}
void Triangle::ShowSides()
{
	cout << "1: " << a->distanceTo(*b) << endl;
	cout << "2: " << b->distanceTo(*c) << endl;
	cout << "3: " << c->distanceTo(*a) << endl;
}
double Triangle::Perimeter()
{
	return a->distanceTo(*b) + b->distanceTo(*c) + c->distanceTo(*a);
}
double Triangle::Square()
{
	double MainPerimeter = this->Perimeter();
	double side1 = a->distanceTo(*b);
	double side2 = b->distanceTo(*c);
	double side3 = c->distanceTo(*a);

	return sqrt(MainPerimeter * (MainPerimeter - side1) * (MainPerimeter - side2) * (MainPerimeter - side3));
}