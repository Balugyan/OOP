#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <ctime>

using namespace std;

template <class T>

class Numbers {
	T m_num;
public:
	Numbers() {	m_num = 0;}
	Numbers(T num) { m_num = num; }
	void print() { cout << m_num << endl; }
	Numbers<T> operator/(Numbers <T> numb);
	T getNum();
};
