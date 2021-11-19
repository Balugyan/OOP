#include "Figure.h"



void Triangle::show(double x, double y)
{
	cout << "Area of triangle: " << (x * y) / 2 << endl;

}

void Rectangle::show(double x, double y)
{
	cout << "Area of rectangle: " << x * y << endl;
}

void Circle::show(double x, double y)
{
	cout << "Area of circle: " << pi * x * x << endl;
}

