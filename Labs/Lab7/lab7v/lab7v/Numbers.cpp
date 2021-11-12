#include "Numbers.h"

void read(string p, Numbers* arr, int size) {
	ifstream fin;
	try {
		fin.open(p, ios::binary);
	}
	catch (const std::exception&) {
		cerr << "Error opening file.\n";
	}
	fin.read((char*)arr, sizeof(arr));
	for (int i = 0; i < size; i++) {
		cout << arr[i].setNumb() << " ";
	}
	cout << "\n";
	fin.close();
}

void write(string p, Numbers* arr, int size) {
	ofstream fout;
	fout.open(p, ios::binary);
	for (int i = 0; i < size; i++) {
		fout.write((char*)&arr[i], sizeof(int));
	}
	cout << "File writen successfuly!\n";
	fout.close();
}

void Numbers::edit(string p, Numbers*& arr, int size) {
	fstream iof;
	try {
		iof.open(p, ios::binary | ios::in | ios::out);
	}
	catch (const std::exception&) {
		cerr << "Error opening file.\n";
	}

	int temp;
    int number1 = 88;  int number2 = 77;

	iof.read((char*)&temp, sizeof(temp));
	
	if (temp % 2 != 0) {
		for (int i = 5; i < size; i++) {
			arr[i].m_numb = number1;
		}
		iof.write((char*)arr, sizeof(arr));
	}
	else {
		for (int i = 0; i < 4; i++) {
			arr[i].m_numb = number2;
		}
		iof.write((char*)arr, sizeof(arr));
	}

	cout << "\n";
	iof.close();
}
