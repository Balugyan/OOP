#include "Antelope.h"

int main()
{
	string p = "Antelope.txt";
	int size;
	cout << "Enter a size: ";
	cin >> size;
	Antelope* arr = new Antelope[size];

	for (;;) {
		int numb;
		cout << "Enter a number: " << endl;
		cout << "1. Print\n";
		cout << "2. To write object to file\n";
		cout << "3. To write an array of objects to file\n";
		cout << "4. To read an array of objects from file\n";
		cout << "5. To read object from file\n";
		cin >> numb;
		if (cin.fail())break;
		system("cls");
		switch (numb) {
		case 1:
			Antelope::print(arr, size);
			system("pause");
			system("cls");
			break;
		case 2:
			Antelope::print(arr, size);
			int index;
			cout << "Which object you want to save to file: ";
			cin >> index;
			cin.ignore();
			Antelope::writeToFile(p, arr, index);
			system("pause");
			system("cls");
			break;
		case 3:
			Antelope::writeToFile2(p, arr, size);
			system("pause");
			system("cls");
			break;
		case 4:
			Antelope::readFromFile2(p, arr, size);
			system("pause");
			system("cls");
			break;
		case 5:
			Antelope::readFromFile(p);
			system("pause");
			system("cls");
			break;
		default:
			cout << "Invalid input.\n" << endl;
			break;
		}
	}

	delete[] arr;
	return 0;
  
}


