#include "DB.h"


void DB::show() {
	Shapka();
	for (int i = 0; i < size; i++) {
		cout << arr[i];
		if (i == size - 1) {
			break;
		}
		else {
			cout << "\n";
		}

	}
	Linebuild();
}

void DB::add() {
	string n;
	string g;
	string h;
	unsigned int ps;

	cout << "Enter a name: ";
	cin >> n;


	cout << "Enter a group: ";
	cin >> g;


	cout << "Enter a habitat: ";
	cin >> h;


	cout << "Enter a population size: ";
	cin >> ps;

	size++;
	Antelope* newArr = new Antelope[size];

	for (int i = 0; i < size - 1; i++) {
		newArr[i] = arr[i];
	}
	newArr[size - 1] = Antelope(n, g, h, ps);

	delete[] arr;

	arr = new Antelope[size];

	for (int i = 0; i < size; i++) {
		arr[i] = newArr[i];
	}

}

void DB::del() {
	size--;
	Antelope* newArr = new Antelope[size];
	for (int i = 0; i < size; i++) {
		newArr[i] = arr[i];
	}
	delete[] arr;

	arr = new Antelope[size];

	for (int i = 0; i < size; i++) {
		arr[i] = newArr[i];
	}
	delete[] newArr;

}

void DB::sort(DB& ob)
{
	for (int i = size - 1; i > 1; i--) {
		for (int j = 0; j < i; j++) {
			if (ob.arr[j].GetName() > ob.arr[j + 1].GetName()) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

DB::DB()
{
	arr = new Antelope[size];
}

DB::DB(string name, string group, string habitat, unsigned int population_size) {
	Antelope arr = Antelope(name, group, habitat, population_size);
}


DB::~DB()
{
	delete[] arr;
}
