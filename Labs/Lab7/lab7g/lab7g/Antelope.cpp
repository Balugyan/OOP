#include "Antelope.h"

int Antelope::count = 0;

Antelope::Antelope()
{
	m_name = names[rand() % 3];
	m_group = groups[rand() % 3];
	m_habitat = habitats[rand() % 2];
	m_population_size = rand() % 10000;
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
}

void Antelope::print(Antelope* arr, int size)
{
	cout << "_______________________________________________________________\n";
	cout << "|                    Some species of antelope                 |\n";
	cout << "|-------------------------------------------------------------|\n";
	cout << "|     Name     |  Group  |    Habitat   |   Population size   |\n";
	cout << "|-------------------------------------------------------------|\n"; 

	for (int i = 0; i < size; i++) {
		cout << "|" << setw(12) << arr[i].m_name << "  |  ";
		cout << setw(7) << arr[i].m_group << "|";
		cout << setw(12) << arr[i].m_habitat << "  |";
		cout << setw(19) << arr[i].m_population_size << "  |\n";
	}
	cout << "|-------------------------------------------------------------|\n";
}

ostream& operator<< (ostream& stream, Antelope& o1)
{

	stream << "|" << setw(12) << o1.m_name << "  |  ";
	stream << setw(7) << o1.m_group << "|";
	stream << setw(12) << o1.m_habitat << "  |";
	stream << setw(19) << o1.m_population_size << "  |";
	
	return stream;
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

void Antelope::writeToFile(string p, Antelope* arr, int index) {
	count++;
	ofstream fout;
	fout.open(p, ios::app);
	fout << setw(12) << arr[index - 1].m_name
	 << setw(7) << arr[index - 1].m_group
	 << setw(12) << arr[index - 1].m_habitat
	 << setw(19) << arr[index - 1].m_population_size << "\n";
	cout << "Saved to the file\n";
	fout.close();
}

void Antelope::writeToFile2(string p, Antelope* arr, int size) {
	count += size;
	ofstream fout;
	fout.open(p, ios::app);
	for (int i = 0; i < size; i++) {
		fout  << setw(12) << arr[i].m_name
			 << setw(7) << arr[i].m_group
			<< setw(12) << arr[i].m_habitat
			 << setw(19) << arr[i].m_population_size << "\n";
	}
	cout << "Saved to the file\n";
	fout.close();
}

void Antelope::readFromFile(string p) {
	long long int index;
	cout << "Which object you want to read from file: ";
	cin >> index;
	Antelope temp;
	ifstream iof;
	try {
		iof.open(p, ios::in);
	}
	catch (const std::exception& ex) {
		cerr << "Error opening file.\n";
	}
	iof.seekg((index));
	iof >> temp.m_name >> temp.m_group >> temp.m_group >> temp.m_population_size;
	print(&temp);
	iof.close();
}

void Antelope::readFromFile2(string p, Antelope*& arr, int size) {
	ifstream fin;
	try {
		fin.open(p);
	}
	catch (const std::exception& ex) {
		cerr << "Error opening file.\n";
	}
	Antelope* temp = new Antelope[count];
	for (int i = 0; i < count; i++) {
		fin >> temp[i].m_name >> temp[i].m_group >> temp[i].m_habitat >> temp[i].m_population_size;
	}
	print(temp, size);

	if (count == 0) {
		cout << "The file is empty.\n";
		return;
	}

	else {
		size = count;
		delete[] arr;
		arr = new Antelope[size];
		for (int i = 0; i < size; i++) {
			arr[i] = temp[i];
		}

		delete[] temp;
	}
	fin.close();
}

int Antelope::getCount()
{
	return count;
}

