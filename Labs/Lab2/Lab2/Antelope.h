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
	Antelope()
	{
		m_name = " ";
		m_group = " ";
		m_habitat = " ";
		m_population_size = 0;

	}

	Antelope(string name, string group, string habitat, unsigned int population_size)
	{
		m_name = name;
		m_group = group;
		m_habitat = habitat;
		m_population_size = population_size;
	}

	void SetName(string n);
	void SetGroup(string g);
	void SetHabitat(string h);
	void SetPopulationSize(unsigned int ps);

	string GetName();
	string GetGroup();
	string GetHabitat();
	unsigned int GetPopulationSize();

	void Shapka();
	void Linebuild();
	void showall();
	friend Antelope operator+(Antelope& o1, Antelope& o2);
	friend int operator == (Antelope& o1, Antelope& o2);
	friend ostream& operator<< (ostream& stream, Antelope& o1);
	friend istream& operator>> (istream& stream, Antelope& o1);
	Antelope& operator = (Antelope& o1);
	int operator[] (int& a);
	void operator() (string n, string g, string h, unsigned int ps);

};
