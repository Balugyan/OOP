#pragma once

#include<iostream> 
#include<string>
#include<fstream>

using namespace std;

class Line {
private:
	string m_line;
public:

	Line(string line = " ") { m_line = line; };
	string getLine() { return m_line; };
	int getSize();
	friend ostream& operator << (ostream& out, Line line);
	void printInFile(Line line, string p);
	void printInFile2(Line line, string p);
};
