#include "Book.h"

int main()
{
	int size = 3;
	LIBRARY* arr = new LIBRARY[size]
	{
		{1, true, "Harry Potter", "J. K. Rowling", 203},
		{2, false, "The Hobbit", "J. R. R. Tolkien", 401},
		{3, true, "A Hero of Our Time", "M. Lermontov", 300}
	};
	string n;

	for (;;) {
		int numb;
		show_all(arr, size);
		cout << "Enter a number: " << endl;
		cout << "1 - Search" << endl;
		cout << "2 - Availability" << endl;
		cout << "3 - Take a book" << endl;
		cout << "4 - Return the book" << endl;
		cin >> numb;
		if (cin.fail())break;
		system("cls");
		switch (numb) {
		case 1:
			cout << "Search:" << endl;
			show_all(arr, size);
			cout << "\nEnter name of the book:" << endl;
			cin.ignore();
			getline(cin, n);
			cout << endl;
			for (int i = 0; i < size; i++) {
				if (arr[i].get_name() == n) {
					arr[i].show();
				}
			}
			cout << endl;
			system("pause");
			system("cls");
			break;
		case 2:
			cout << "Availability:" << endl;
			show_all(arr, size);
			cout << "\nEnter name of the book:" << endl;
			cin.ignore();
			getline(cin, n);
			cout << endl;
			for (int i = 0; i < size; i++) {
				if (arr[i].get_name() == n) {
					arr[i].Avaliability();
				}
			}
			system("pause");
			system("cls");
			break;
		case 3:
			cout << "Take a book:" << endl;
			show_all(arr, size);
			cout << "\nEnter name of the book:" << endl;
			cin.ignore();
			getline(cin, n);
			cout << endl;
			for (int i = 0; i < size; i++) {
				if (arr[i].get_name() == n && arr[i].Avaliability()) {
					arr[i].take();
				}
			}
			system("pause");
			system("cls");
			break;
		case 4:
			cout << "Return the book:" << endl;
			show_all(arr, size);
			cout << "\nEnter name of the book:" << endl;
			cin.ignore();
			getline(cin, n);
			cout << endl;
			for (int i = 0; i < size; i++) {
				if (arr[i].get_name() == n && !arr[i].Avaliability()) {
					arr[i].ret();
				}
			}
			system("pause");
			system("cls");
			break;
		default:
			cout << "Invalid input." << endl;
			break;
		}
		
	}
	 
	delete[] arr;
}

