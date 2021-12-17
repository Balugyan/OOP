#pragma once

#include<iostream>
#include<string>

using namespace std;

class Number {
private:
	string m_number;
public:

	Number(string number = "");
	string getNumber();
	friend ostream& operator << (ostream& out, Number number);
};
