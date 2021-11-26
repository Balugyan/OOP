#include "Multiplicity.h"

int Multiplicity::returnCopy(Multiplicity obj2, int max)
{
	int sizeCopy = 0;
	for (int i = 0; i < obj2.m_size; i++)
	{
		if (obj2.m_multiplicity[i] < max) {
			sizeCopy++;
		}
	}
	return sizeCopy;
}

Multiplicity::Multiplicity(const Multiplicity& obj2, int max)
{

	m_size = returnCopy(obj2, max);
	m_leftBorder = obj2.m_leftBorder;
	m_rightBorder = obj2.m_rightBorder;

	m_multiplicity = new int[m_size];

	for (int i = 0; i < obj2.m_size; i++)
	{
		if (obj2.m_multiplicity[i] >= max) {
			continue;
		}
		else {
			m_multiplicity[i] = obj2.m_multiplicity[i];
		}
	}
	for (int i = 0; i < m_size; i++)
	{
		cout << m_multiplicity[i] << " ";
	}
}

Multiplicity::Multiplicity()
{
	m_size = 10;
	m_leftBorder = -20;
	m_rightBorder = 20;
	m_multiplicity = new int[m_size];
	for (int i = 0; i < m_size; ++i)
	{
		bool isUnique;
		do {
			m_multiplicity[i] = rand() % (20 + 20 + 1) - 20;
			isUnique = true;
			for (int j = 0; j < i; j++)
			{
				if (m_multiplicity[i] == m_multiplicity[j]) {
					isUnique = false;
					break;
				}
			}
		} while (!isUnique);
	}
	for (int i = 0; i < m_size; i++)
	{
		cout << m_multiplicity[i] << " ";
	}
}

Multiplicity::Multiplicity(int size, int leftBorder, int rightBorder)
{

	m_size = size;
	m_leftBorder = leftBorder;
	m_rightBorder = rightBorder;
	m_multiplicity = new int[size];
	for (int i = 0; i < size; ++i)
	{
		bool isUnique;
		do {
			m_multiplicity[i] = rand() % (rightBorder - leftBorder + 1) + leftBorder;
			isUnique = true;
			for (int j = 0; j < i; j++)
			{
				if (m_multiplicity[i] == m_multiplicity[j]) {
					isUnique = false;
					break;
				}
			}
		} while (!isUnique);
	}
	for (int i = 0; i < size; i++)
	{
		cout << m_multiplicity[i] << " ";
	}
	cout << "\n";
}


int Multiplicity::findMax(Multiplicity obj)
{
	int max = INT_MIN;
	for (int i = 0; i < obj.m_size; i++)
	{
		if (obj.m_multiplicity[i] > max) {
			max = obj.m_multiplicity[i];
		}
	}
	return max;
}

void Multiplicity::Union(Multiplicity obj1, Multiplicity obj2) {
	cout << "\nUnion\n";
	for (int i = 0; i < obj1.m_size; i++)
	{
		cout << obj1.m_multiplicity[i] << " ";
	}
	for (int i = 0; i < obj2.m_size; i++)
	{
		cout << obj2.m_multiplicity[i] << " ";
	}
	cout << "\n";
}
void Multiplicity::Intersection(Multiplicity obj1, Multiplicity obj2) {
	cout << "\nIntersection\n";
	bool f = false;
	for (int i = 0; i < obj1.m_size; i++) {
		for (int u = 0; u < obj2.m_size; u++) {
			if (obj1.m_multiplicity[i] == obj2.m_multiplicity[u]) {
				f = true;
				cout << obj1.m_multiplicity[i] << " ";
			}
		}
	}
	if (!f) {
		cout << "None\n\n";
	}
	cout << "\n";
}
void Multiplicity::Difference(Multiplicity obj1, Multiplicity obj2) {
	cout << "\nDifference\n";
	for (int i = 0; i < obj2.m_size; i++) {
		for (int j = 0; j < obj1.m_size; j++) {
			if (obj2.m_multiplicity[i] != obj1.m_multiplicity[j]) {
				cout << obj1.m_multiplicity[j] << " ";
			}
		}
		break;
	}
	cout << "\n";
}

void Multiplicity::SymmetricDifference(Multiplicity obj1, Multiplicity obj2) {
	cout << "\nSymmetric Difference\n";
	for (int i = 0; i < obj1.m_size; i++) {
		for (int j = 0; j < obj2.m_size; j++) {
			if (obj1.m_multiplicity[i] == obj2.m_multiplicity[j]) goto l1;
		}
		cout << obj1.m_multiplicity[i] << " ";

	l1:;
	};
	for (int i = 0; i < obj2.m_size; i++) {
		for (int j = 0; j < obj1.m_size; j++) {
			if (obj2.m_multiplicity[i] == obj1.m_multiplicity[j]) goto l2;
		}
		cout << obj2.m_multiplicity[i] << " ";
	l2:;
	};

	cout << "\n\n";
}
