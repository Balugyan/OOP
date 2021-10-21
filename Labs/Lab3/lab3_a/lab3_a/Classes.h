#pragma once

#include <iostream>
#include <string>

using namespace std;
class DOG {
	int m_weight;
	int m_age;
public:
	DOG()
	{
		cout << "DOG constructor" << endl;
	}
	~DOG() {
		cout << "DOG destructor" << endl;
	}
	void golos();
	void show();
	void enter();
};
class SPANIEL : public DOG {
	string m_color;

public:
	SPANIEL()
	{
		cout << "SPANIEL constructor" << endl;
	}
	~SPANIEL() {
		cout << "SPANIEL destructor" << endl;
	}
	void enter();
	void show();
	
};