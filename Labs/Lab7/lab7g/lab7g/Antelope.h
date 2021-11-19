#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include<fstream>
#include<time.h>

using namespace std;

class Antelope {
private:
	string m_name;
	string m_group;
	string m_habitat;
	unsigned int m_population_size;
public:
	Antelope();

	void SetName(string n);
	void SetGroup(string g);
	void SetHabitat(string h);
	void SetPopulationSize(unsigned int ps);

	string GetName();
	string GetGroup();
	string GetHabitat();
	unsigned int GetPopulationSize();

	string names[3] = { "Jeyran","Wildebeest","Beiza" };
	string groups[3] = { "A","B","H" };
	string habitats[2] = { "Asia","Africa" };
	
	friend ostream& operator<< (ostream& stream, Antelope& o1);
	friend istream& operator>> (istream& stream, Antelope& o1);
	void operator()(string n, string g, string h, unsigned int ps);
	Antelope& operator=(Antelope& o1);
	static void writeToFile(string p, Antelope* arr, int index);
	static void writeToFile2(string p, Antelope* arr, int size);
	static void readFromFile2(string p, Antelope*& arr, int size);
	static void readFromFile(string p);
	static int count;
	int getCount();
	static void print(Antelope* arr, int size = 1);

};
