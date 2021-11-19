#pragma once

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class A {
private:
	int m_x;
	static int m_countB, m_countC;
public:
	int getX() { return m_x; }
	void setX(int x) {m_x = x;}
	static void randA(A* arrA, int size);
	static void printA(A* arrA, int size);
	static int getCountB() {return m_countB;}
	static int getCountC() {return m_countC;}
};

class B : public A {
private:
	int m_y;
public:
	static void randB(B* arrB, A* arrA, int size);
	static void printB(B* arrB);
	void setY(int y) {m_y = y;}
	int getY() {return m_y;}
};

class C :public B {
private:
	int m_z;
public:
	static void randC(C* arrC, A* arrA,  int size);
	static void printC(C* arrC);
	static void printSameElements(A* arrA, int size);
	void setZ(int z) {m_z = z;}
	int getZ() {return m_z;}
};

