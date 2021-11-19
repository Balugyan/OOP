#pragma once

#include<iostream>
#include<typeinfo>

using namespace std;

template<class T>
class Arr {
private:
	T* m_arr;
	T m_sum;
	int m_size;
	int m_index;
	double m_average;

public:
	Arr();
	~Arr() { delete[] m_arr; };
	void setIndex(int index);
	void initArr(int ind);
	void print(int ind);
	void findAverage(int ind);
	double getAverage();
	T getSum();
	void findSum(int ind);
	T& operator[](int ind);
	void findMax(int ind);
	
};

void menu();



