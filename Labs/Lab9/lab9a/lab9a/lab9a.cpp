#include "Vect.h"

int main()
{
	srand(time(NULL));
	vector<Vect> vectors(2);

	int num, num2, num3, num4;

	cout << "Enter the first number: ";
	cin >> num;
	cout << "Enter the second number: ";
	cin >> num2;
	vectors[0] = Vect(num, num2);
	cout << endl;
	cout << "Enter the first number: ";
	cin >> num3;
	cout << "Enter the second number: ";
	cin >> num4;
	vectors[1] = Vect(num3, num4);
	cout << endl;
	print(vectors);

	vectors[0] == vectors[1];

	return 0;
}

