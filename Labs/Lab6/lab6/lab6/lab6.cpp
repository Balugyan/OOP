#include "Book.h"

int main()
{
	int size = 5;

	Book* arr = new Book[size];
	
	arr[0].add("Dystopian", "R. Bradbury", "Fahrenheit 451", 1953, 295);
	arr[1].add("Horror", "S. King", "It", 1986, 231);
	arr[2].add("Dystopian", "G. Orwell", "Nineteen Eighty-Four", 1949, 200);
	arr[3].add("Fantasy", "J. K. Rowling", "Harry Potter", 1997, 287);
	arr[4].add("Dystopian", "A. Huxley", "Brave New World", 1932, 300);

	for (;;) {
		int numb;
		print(arr, size);
		cout << "Enter a number: " << endl;
		cout << "1 - Sort" << endl;
		cout << "2 - Change" << endl;

		cin >> numb;
		if (cin.fail())break;
		system("cls");
		switch (numb) {
		case 1:
			sort(arr, size);
			print(arr, size);
			system("pause");
			system("cls");
			break;
		case 2:
			print(arr, size);
			change(arr);
			print(arr, size);
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

   



