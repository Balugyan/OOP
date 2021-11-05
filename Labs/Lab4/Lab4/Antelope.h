#pragma once

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Antelope {
private:
	string m_name;
	string m_group;
	string m_habitat;
	unsigned int m_population_size;
public:
	Antelope();

	Antelope(string name, string group, string habitat, unsigned int population_size);

	void SetName(string n);
	void SetGroup(string g);
	void SetHabitat(string h);
	void SetPopulationSize(unsigned int ps);

	string GetName();
	string GetGroup();
	string GetHabitat();
	unsigned int GetPopulationSize();

	string names[3] = { "Jeyran","Wildebeest","Beiza"};
	string groups[3] = { "A","B","H" };
	string habitats[2] = { "Asia","Africa" };
	void Shapka();
	void Linebuild();
	friend ostream& operator<< (ostream& stream, Antelope& o1);
	friend istream& operator>> (istream& stream, Antelope& o1);

};




