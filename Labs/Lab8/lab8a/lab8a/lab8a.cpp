#include "Numbers.h"

int main()
{
	int num1, num2;
	double number1, number2;

	cout << "Enter the first number: ";
	cin >> number1;
	cout << "Enter the second number: ";
	cin >> number2;

	Numbers<double> dnumber1(number1);
	Numbers<double> dnumber2(number2);


	cout << "The first number: ";
	dnumber1.print();
	cout << "The second number: ";
	dnumber2.print();
	cout << "Result: ";

	string exception;
	try {
		Numbers<double> dnumber3(dnumber1 / dnumber2);

		if (dnumber2.getNum() == 0) {
			exception = "Division by zero.\n";
			throw exception;
		}
		dnumber3.print();
	}
	catch (string& exception) {
		cerr << exception;
	}

	cout << "\nEnter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;

	Numbers<int> inum1(num1);
	Numbers<int> inum2(num2);

	cout << "The first number: ";
	inum1.print();
	cout << "The second number: ";
	inum2.print();
	cout << "Result: ";
	string ex;
	try {

		Numbers<int> inum3(inum1 / inum2);
		if (inum2.getNum() == 0) {
			ex = "Division by zero.\n";
			throw ex;
		}
		inum3.print();
	}
	catch (string& ex) {
		cerr << ex;
	}

	system("pause");
}

