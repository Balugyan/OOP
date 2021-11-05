#include "Antelope.h"

Antelope::Antelope()
{
	m_name = names[rand() % 3];
	m_group = groups[rand() % 3];
	m_habitat = habitats[rand() % 2];
	m_population_size = rand() % 10000;
}

Antelope::Antelope(string name, string group, string habitat, unsigned int population_size)
{
	m_name = name;
	m_group = group;
	m_habitat = habitat;
	m_population_size = population_size;
}

void Antelope::SetName(string n)
{
	m_name = n;
}

void Antelope::SetGroup(string g)
{
	m_group = g;
}

void Antelope::SetHabitat(string h)
{
	m_habitat = h;
}

void Antelope::SetPopulationSize(unsigned int ps)
{
	m_population_size = ps;
}

string Antelope::GetName()
{
	return m_name;
};
string Antelope::GetGroup()
{
	return m_group;
};
string Antelope::GetHabitat()
{
	return m_habitat;
};
unsigned int Antelope::GetPopulationSize()
{
	return m_population_size;
};

void Antelope::Shapka()
{
	cout << "_______________________________________________________________\n";
	cout << "|                    Some species of antelope                 |\n";
	cout << "|-------------------------------------------------------------|\n";
	cout << "|     Name     |  Group  |    Habitat   |   Population size   |\n";
	cout << "|-------------------------------------------------------------|\n";
}

void Antelope::Linebuild() {
	cout << "\n|-------------------------------------------------------------|\n";
}

istream& operator>> (istream& stream, Antelope& o1)
{
	string n;
	string g;
	string h;
	unsigned int ps;

	cout << "Enter a name: ";
	cin >> n;
	o1.SetName(n);

	cout << "Enter a group: ";
	cin >> g;
	o1.SetGroup(g);

	cout << "Enter a habitat: ";
	cin >> h;
	o1.SetHabitat(h);

	cout << "Enter a population size: ";
	cin >> ps;
	o1.SetPopulationSize(ps);

	return stream;
}

ostream& operator<< (ostream& stream, Antelope& o1)
{
	stream << "|" << setw(12) << o1.m_name << "  |  ";
	stream << setw(7) << o1.m_group << "|";
	stream << setw(12) << o1.m_habitat << "  |";
	stream << setw(19) << o1.m_population_size << "  |";
	return stream;
}
