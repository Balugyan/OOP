#include "Array.h"

int main()
{
	Arr<double> arr2;
	Arr<int> arr1;

	int num;
	int ind;
	
	cout << "Enter a number:\n";
	cout << "1. Int\n";
	cout << "2. Double\n";
	cin >> num;
	int choice;
	if(num==1){
		cout << "Enter ind: ";
		cin >> ind;
		try
		{
			string ex = "Index out of bounds.\n";
			if (ind > 100||ind<0) {
				throw ex;
			}
		}
		catch (string& ex) {
			cerr << ex;
		}
	  for(;;){
		menu();
		cin >> choice;
		switch (choice) {
		case 1: {
			for (int i = 0; i < ind; i++) {
				arr1.initArr(i);
			}
			system("pause");
			system("cls");
			break;
		}
		case 2: {
			arr1.findSum(ind);
			cout << "Sum: " << arr1.getSum() << "\n";
			system("pause");
			system("cls");
			break;
		}
		case 3: {
			arr1.findAverage(ind);
			cout << "Average: " << arr1.getAverage() << "\n";
			system("pause");
			system("cls");
			break;
		}
		case 4: {
			arr1.print(ind);
			system("pause");
			system("cls");
			break;
		}
		case 5: {
			arr1.findMax(ind);
			system("pause");
			system("cls");
			break;
		}
		}
	  }
	}

	if (num == 2) {
		cout << "Enter ind: ";
		cin >> ind;
		try{
		 string ex = "Index out of bounds.\n";
     		if (ind > 100 || ind < 0) {
				throw ex;
			}
		}
		catch (string& ex) {
				cerr << ex;
		}
		for (;;) {
			menu();
			cin >> choice;
			switch (choice) {
				case 1: {
					for (int i = 0; i < ind; i++) {
						arr2.initArr(i);
					}
					system("pause");
					system("cls");
					break;
				}
				case 2: {
					arr2.findSum(ind);
					cout << "Sum: " << arr2.getSum() << "\n";
					system("pause");
					system("cls");
					break;
				}
				case 3: {
					arr2.findAverage(ind);
					cout << "Average: " << arr2.getAverage() << "\n";
					system("pause");
					system("cls");
					break;
				}
				case 4: {
					arr2.print(ind);
					system("pause");
					system("cls");
					break;
				}
				case 5: {
					arr2.findMax(ind);
					system("pause");
					system("cls");
					break;
				}
			}
		}
    }

	else {
			cout << "Invalid input.\n";
	}
	
}


