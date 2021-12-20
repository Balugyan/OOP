#include "Test.h"
void menu();

template <class T>
void loop(Test<T> test);

int main() {
	int typeChoice;
	cout << "1. int\n";
	cout << "2. double\n";
	cout << "3. char\n";
	cin >> typeChoice;

	system("cls");

	if (typeChoice == 1) {
		Test<int> test;
		loop(test);
	}
	else if (typeChoice == 2) {
		Test<double> test;
		loop(test);
	}
	else if (typeChoice == 3) {
		Test<char> test;
		loop(test);
	}
	return 0;
}

void menu() {
	cout << "1. To test sum\n";
	cout << "2. To test min\n";
	cout << "3. To test sort\n";
	cout << "4. To test incorrect situation sum\n";
	cout << "5. To test incorrect situation min\n";
	cout << "6. To test incorrect situation sort\n";
	cout << "7. Exit\n";
}

template <class T>
void loop(Test<T> test) {
	int choice;

	menu();
	while (true) {
		cout << "\nMake your choice: ";
		cin >> choice;
		switch (choice) {
		case 1: {
			test.testSum();
			break;
		}
		case 2: {
			test.testMin();
			break;
		}
		case 3: {
			test.testSort();
			break;
		}
		case 4: {
			test.testSumEmulatedSituation();
			break;
		}
		case 5: {
			test.testMinEmulatedSituation();
			break;
		}
		case 6: {
			test.testSortEmulatedSituation();
			break;
		}
		case 7: {
			system("cls");
			exit(0);
			break;
		}
		}
	}
}

