#include "Line.h"

int main()
{
	int num;
	string p = "Line.txt";
	Line line;

	for (;;) {
		cout << "Enter a number" << endl;
		cout << "1. Enter a string" << endl;
		cout << "2. To write a string in file" << endl;
		cout << "3. To write modified string in file" << endl;
		cout << "4. Exit" << endl;
		cin >> num;
		cin.ignore();
		switch (num) {
		case 1: {
			string l;
			cout << "Enter a line: " << endl;
			getline(cin, l);
			line = Line(l);
			std::system("pause");
			std::system("cls");
			break;
		}
		case 2: {
			line.printInFile(line, p);
			std::system("pause");
			std::system("cls");
			break;
		}
		case 3: {
			line.printInFile2(line, p);
			std::system("pause");
			std::system("cls");
			break;
		}
		}
		if (num == 4)
			break;
	}
	return 0;
}

