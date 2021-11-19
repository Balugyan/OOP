#pragma once

#include<iostream>
#include<cmath>
using namespace std;

const double pi = 3.14;

class Figure {
	protected:
	double m_x, m_y;
public:
	Figure() {m_x = 0; m_y = 0; }
	Figure(double x){ m_x = x; m_y = 0; }
	Figure(double x, double y){ m_x = x; m_y = y; }
	//Figure(double x, double y, double z){m_x = x; m_y = y;}
	
	double getX() { return m_x; }
	double getY() { return m_y; }
	
	void setX(double x) { m_x = x; };
	void setY(double y) { m_y = y; };
	
	virtual void show(double x = 0, double y = 0) = 0;
	
};

class Triangle : public Figure {
public:
	Triangle() :Figure{} {};
	Triangle(double x, double y) :Figure{ x, y} {};
	void show(double x, double y)override;
};

class Rectangle : public Figure {
public:
	Rectangle() :Figure{} {};
	Rectangle(double x, double y) :Figure{ x, y } {};
	void show(double x, double y) override;
};

class Circle : public Figure {
public:
	Circle() :Figure{} {};
	Circle(double x) :Figure{ x } {};
	void show(double x, double y = 0) override;
};

