#include "Antelope.h"

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

void Shapka()
{
	cout << "_______________________________________________________________\n";
	cout << "|                    Some species of antelope                 |\n";
	cout << "|-------------------------------------------------------------|\n";
	cout << "|     Name     |  Group  |    Habitat   |   Population size   |\n";
	cout << "|-------------------------------------------------------------|\n";
}

void Linebuild() {
	cout << "\n|-------------------------------------------------------------|\n";
}

ostream& operator<< (ostream& stream, Antelope& o1)
{
	Shapka();
	stream << "|" << setw(12) << o1.m_name << "  |  ";
	stream << setw(7) << o1.m_group << "|";
	stream << setw(12) << o1.m_habitat << "  |";
	stream << setw(19) << o1.m_population_size << "  |";
	Linebuild();
	return stream;
}

void Antelope::showall() {
	cout << m_name << " ";
	cout << m_group << " ";
	cout << m_habitat << " ";
	cout << m_population_size << " ";
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

int Antelope::operator[](int& a)
{
	a = m_name.length();
	return a;
}

void Antelope::operator()(string n = "Jeyran", string g = "A", string h = "Asia", unsigned int ps = 0)
{
	m_name = n;
	m_group = g;
	m_habitat = h;
	m_population_size = ps;
}

Antelope& Antelope::operator = (Antelope& o1) {
	m_name = o1.m_name;
	m_group = o1.m_group;
	m_habitat = o1.m_habitat;
	m_population_size = o1.m_population_size;
	return *this;
}


int operator == (Antelope& o1, Antelope& o2) {
	if (o1.m_name != o2.m_name) { cout << "Instances of the class are not equal.\n"; }
	else if (o1.m_group != o2.m_group) { cout << "Instances of the class are not equal.\n"; }
	else if (o1.m_habitat != o2.m_habitat) { cout << "Instances of the class are not equal.\n"; }
	else if (o1.m_population_size != o2.m_population_size) { cout << "Instances of the class are not equal.\n"; }
	else cout << "Instances of the class are equal.";
	return 0;
}

Antelope operator + (Antelope& o1, Antelope& o2) {
	Antelope tr;

	tr.m_name = o1.m_name + o2.m_name;
	tr.m_group = o1.m_group + o2.m_group;
	tr.m_habitat = o1.m_habitat + o2.m_habitat;
	tr.m_population_size = o1.m_population_size + o2.m_population_size;

	return tr;
}

