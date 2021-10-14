#include "Antelope.h"

int main()
{

	int size = 3;
	int a, b;

	Antelope obj[3]
	{
		Antelope("Jeyran", "A", "Asia", 30000),
		Antelope("Wildebeest", "B", "Africa", 560000),
		Antelope("Beiza", "H", "Africa", 2500)
	};

	int num;
	int str = 0;
	for (;;) {
		cout << "Name, Group, Habitat, Polution size: \n";
		for (int i = 0; i < size; i++) {
			obj[i].showall();
			cout << "\n";
		}

		cout << "\nEnter a number" << endl;
		cout << "1. Operator overloading '<<' " << endl;
		cout << "2. Operator overloading '=' " << endl;
		cout << "3. Operator overloading '()' " << endl;
		cout << "4. Operator overloading '==' " << endl;
		cout << "5. Operator overloading '>>' " << endl;
		cout << "6. Operator overloading '[]' " << endl;
		cout << "7. Operator overloading '+' " << endl;
		cout << "8. Exit" << endl;
		cin >> num;
		if (cin.fail())break;
		system("cls");
		switch (num)
		{
		case 1:
			cout << "Operator overloading '<<'" << endl;
			cout << "Enter the numbers of the instances of the _class: " << endl;
			cin >> a;
			cout << obj[a];
			system("pause");
			system("cls");
			break;
		case 2:
			cout << "Operator overloading '=' " << endl;
			cout << "Enter the numbers of the instances of the _class: " << endl;
			cin >> a;
			cin >> b;
			obj[a] = obj[b];

			cout << "Name, Group, Habitat, Population size: \n";
			for (int i = 0; i < 3; i++) {
				obj[i].showall();
				cout << "\n";
			}
			system("pause");
			system("cls");
			break;

		case 3:
			cout << "Operator overloading '()' " << endl;
			for (int i = 0; i < size; i++)
				obj[i]("Jeyran", "A", "Asia", 0);
			system("cls");
			break;
		case 4:
			cout << "Operator overloading '==' " << endl;
			cout << "Enter the numbers of the instances of the _class to be compared: " << endl;
			cin >> a;
			cin >> b;
			obj[a] == obj[b];
			system("pause");
			system("cls");
			break;
		case 5:
			cout << "Operator overloading '>>' " << endl;
			cout << "Enter the numbers of the instances of the _class: ";
			cin >> a;

			cin >> obj[a];
			system("pause");
			system("cls");
			break;
		case 6:

			cout << "Operator overloading '[]' " << endl;
			for (int i = 0; i < size; i++) {
				cout << i + 1 << " length = " << obj[i][str] << endl;
			}
			system("pause");
			system("cls");
			break;
		case 7:
			cout << "Operator overloading '+' " << endl;
			cout << "Enter the numbers of the instances of the _class: " << endl;
			cin >> a;
			cin >> b;
			Antelope temp = obj[a] + obj[b];
			cout << temp.GetName() << " " << temp.GetGroup() << " " << temp.GetHabitat() << " " << temp.GetPopulationSize() << endl;
			system("pause");
			system("cls");
			break;
		}
		if (num == 8)
			break;
	}
	return 0;

}



