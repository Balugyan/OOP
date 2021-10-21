#include "Classes.h"

void DOG::golos() {

	if (m_weight >= 10)
		cout << "WOOF!" << endl;
	else {
		cout << "woof!" << endl;
	}
	cout << endl;
}

void DOG::show()
{
	cout << "Age: " << m_age << endl;
	cout << "Weight: " << m_weight << endl;
}

void DOG::enter()
{
	cout << "Enter an age: ";
	cin >> m_age;
	cout << "Enter a weight: ";
	cin >> m_weight;
}

void SPANIEL::enter(){
		DOG::enter();
		cout << "Enter a color: ";
		cin >> m_color;
}

void SPANIEL::show()
{
	DOG::show();
	cout << "Color: " << m_color << endl;
}
