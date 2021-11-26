#include "Multiplicity.h"

int main() {
	for (;;) {
		int num;
		cout << "1. To create default constructor\n";
		cout << "2. To create constructor with parameters\n";
		cout << "3. To create copy constructor\n";
		cout << "4. To find max \n";
		cout << "5. Operarions\n";
		cin >> num;
		switch (num) {
		case 1: {
			Multiplicity obj;
			std::system("pause");
			std::system("cls");
			break;
		}
		case 2: {
			int size;
			int leftBorder;
			int rightBorder;

			cout << "Enter size: ";
			cin >> size;
			cout << "Enter left border: ";
			cin >> leftBorder;
			cout << "Enter right border: ";
			cin >> rightBorder;
			Multiplicity obj1(size, leftBorder, rightBorder);
			std::system("pause");
			std::system("cls");
			break;
		}
		case 3: {
			int max;
			int size;
			int leftBorder;
			int rightBorder;

			cout << "Enter size: ";
			cin >> size;
			cout << "Enter left border: ";
			cin >> leftBorder;
			cout << "Enter right border: ";
			cin >> rightBorder;
			system("cls");
			Multiplicity obj2(size, leftBorder, rightBorder);
			Multiplicity obj3(obj2);
			std::system("pause");
			std::system("cls");
			break;
		}
		case 4: {
			int size;
			int leftBorder;
			int rightBorder;

			cout << "Enter size: ";
			cin >> size;
			cout << "Enter left border: ";
			cin >> leftBorder;
			cout << "Enter right border: ";
			cin >> rightBorder;
			system("cls");
			Multiplicity obj1(size, leftBorder, rightBorder);
			cout << "\nMax: " << Multiplicity::findMax(obj1) << "\n";
			std::system("pause");
			std::system("cls");
			break;
		}
		case 5: {
			int size1;
			int leftBorder1;
			int rightBorder1;

			cout << "First\n";
			cout << "Enter size: ";
			cin >> size1;
			cout << "Enter left border: ";
			cin >> leftBorder1;
			cout << "Enter right border: ";
			cin >> rightBorder1;

			int size2;
			int leftBorder2;
			int rightBorder2;
			cout << "Second\n";
			cout << "Enter size: ";
			cin >> size2;
			cout << "Enter left border: ";
			cin >> leftBorder2;
			cout << "Enter right border: ";
			cin >> rightBorder2;
			system("cls");

			Multiplicity obj1(size1, leftBorder1, rightBorder1);
			Multiplicity obj2(size2, leftBorder2, rightBorder2);

			Multiplicity::Union(obj1, obj2);
			Multiplicity::Intersection(obj1, obj2);
			Multiplicity::Difference(obj1, obj2);
			Multiplicity::SymmetricDifference(obj1, obj2);
			std::system("pause");
			std::system("cls");
			break;
		}

		}
	}
	return 0;
}