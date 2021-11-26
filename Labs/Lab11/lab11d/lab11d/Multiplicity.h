#pragma once

//Multiplicity.h

#include<iostream>
#include<time.h>

using namespace std;

class Multiplicity {
private:
	int m_size;
	int m_leftBorder;
	int m_rightBorder;
    int* m_multiplicity;
public:
	void setSize(int size) { m_size = size; };
	void setLeftBorder(int leftBorder) { m_leftBorder = leftBorder; };
	void setRightBorder(int rightBorder) { m_rightBorder = rightBorder; }
	int getSize() { return m_size; }
	int getLeftBorder() { return m_leftBorder; }
	int getRightBorder() { return m_rightBorder; }
	int returnCopy(Multiplicity obj2, int max);
	Multiplicity();
	Multiplicity(int size, int leftBorder, int rightBorder);
	Multiplicity(const Multiplicity& obj2, int max);
	static int findMax(Multiplicity obj);
	static void Union(Multiplicity obj1, Multiplicity obj2);
	static void Intersection(Multiplicity obj1, Multiplicity obj2);
	static void Difference(Multiplicity obj1, Multiplicity obj2);
	static void SymmetricDifference(Multiplicity obj1, Multiplicity obj2);
};

