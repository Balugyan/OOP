#pragma once

#include<iostream>
#include<string>

using namespace std;

class Name {
private:
	string m_name;
public:

	Name(string name = "");
	string getName();
	friend bool operator <(const Name& name1, const Name& name2);
	friend ostream& operator << (ostream& out, Name name);

};