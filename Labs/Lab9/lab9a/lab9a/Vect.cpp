#include "Vect.h"



Vect::Vect(int num1, int num2)
{
	m_num1 = num1;
	m_num2 = num2;
	m_sum = m_num1 + m_num2;
}

int Vect::getSum()
{
	return m_sum;
}



void Vect::operator==(Vect vect)
{
	if (m_sum == vect.m_sum) {
		cout << m_sum << " = " << vect.m_sum<<endl;
	}
	else if (m_sum > vect.m_sum) {
		cout << m_sum << " > " << vect.m_sum << endl;
	}
	else {
		cout << m_sum << " < " << vect.m_sum << endl;
		
	}
}

void print(vector<Vect> vectors)
{
	for (int i = 0; i < vectors.size(); i++) {
		cout << "Vector " << i + 1 << ": " << vectors[i].m_num1 << ", " << vectors[i].m_num2 << "\n";
		cout << "Summ = " << vectors[i].m_sum << endl<<endl;
	}
}
