#include "Numbers.h"

int main()
{
	srand(time(NULL));
	string p = "Numbers.txt";
	int size = 10;
	Numbers* arr = new Numbers[size];

	for (;;) {
		int numb;
		cout << "1. To write in file\n";
		cout << "2. To read from file\n";
		cout << "3. To edit\n";
		cout << "4. Exit\n";
		cin >> numb;
		cin.ignore();
		switch (numb) {
		case 1: {
			write(p, arr, size);
			system("pause");
			system("cls");
			break;
		}
		case 2: {
			read(p, arr, size);
			system("pause");
			system("cls");
			break;
		}
		case 3: {
			read(p, arr, size);
			Numbers::edit(p, arr, size);
			read(p, arr, size);
			system("pause");
			system("cls");
			break;
		}

		case 4: {
			system("cls");
			exit(0);
			break;
		}
		}
	}
	delete[] arr;
	return 0;
}


