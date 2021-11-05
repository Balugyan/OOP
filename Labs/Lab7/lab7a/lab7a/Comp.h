#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include<ctime>

using namespace std;

class Comp {
    int m_num, m_num2;
public:
    Comp(int num = 0, int num2 = 0) { m_num = num; m_num2 = num2; }

    void setNum(int num) { m_num = num; }
    void setNum2(int num2) { m_num2 = num2; }
    static void complex(Comp* arr, int size, string* comp);
    static int setSize();
    friend ostream& operator << (ostream& out, Comp& arr);
    friend istream& operator >> (istream& in, Comp& arr);
};

void print(int size, Comp* arr);
void write(string p, int size, Comp* arr);
void read(string p, int size, Comp* arr);
void complexInFile(string* comp, Comp* arr, int size);