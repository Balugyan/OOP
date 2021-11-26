#pragma once

#include<iostream>
#include<ctime>
#include<vector>

using namespace std;

class Vect {
private:
	int m_num1, m_num2, m_sum;
public:
	Vect() { m_num1 = 0; m_num2 = 0; m_sum = 0; }
	Vect(int num1, int num2);
	int getSum();
    friend void print(vector<Vect> vectors);
	void operator == (Vect vect);
};