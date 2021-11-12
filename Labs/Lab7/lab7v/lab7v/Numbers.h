#pragma once

#include <iostream>
#include<fstream>
#include<ctime>

using namespace std;

class Numbers {
private:
	int m_numb;
public:
	Numbers() { m_numb = rand() % 100; }
	int setNumb() { return m_numb; }
	static void edit(string p, Numbers*& arr, int size);

};

 void read(string p, Numbers* arr, int size);
 void write(string p, Numbers* arr, int size);