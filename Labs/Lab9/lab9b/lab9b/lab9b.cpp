#include"Name.h"
#include "Number.h"
#include<map>
#include<ctime>
#include<iomanip>

string names[15] = { "Scott", "Allison", "Stiles", "Derek", "Lydia", "Jackson", "Malia",
					 "Kira", "Liam", "Noah","Dean", "Jack",  "Jimmy", "Bobby", "Jody" };

string numbers[15] = { "1234567890", "1253749501", "1325678403", "1293456902", "1923045788",
						"1827340576", "1273459760", "1982736450", "1129983745", "1238495760",
						"1738493042", "1534487399", "1927366646", "1628394999", "1696928130" };

int main() {
	srand(time(NULL));

	int length;
	cout << "Enter length: ";
	cin >> length;
	cin.ignore();

	map<Name, Number> abonent;

	for (int i = 0; i < length; i++) {
		abonent.insert(pair<Name, Number>(Name(names[rand() % 15]), Number(numbers[rand() % 15])));
	}

	int i = 1;
	for (const auto& it : abonent) {
		cout << i++ << " " << left << setw(20) << it.first
			<< left << setw(15) << it.second << "\n";
	}

	
	string key;
	cout << "\n\nEnter name to find abonent:\n";
	getline(cin, key);

	for (auto p = abonent.begin(); p != abonent.end(); p++) {
		if (key == const_cast<Name&>(p->first).getName()) {
			cout << left << setw(20) << p->first
				<< left << setw(15) << p->second << "\n";
			break;
		}
	}

	
	char symbol;
	cout << "Enter symbol to find all abonents with this starting letter:\n";
	cin >> symbol;
	for (const auto& p : abonent) {
		if (symbol == const_cast<Name&>(p.first).getName()[0]) {
			cout << left << setw(20) << p.first
				<< left << setw(15) << p.second << "\n";
		}
	}

	
	cout << "Enter symbol to erase all abonents with this starting letter:\n";
	cin >> symbol;
	for (auto p = abonent.begin(); p != abonent.end();) {
		auto it = p;
		p++;
		if (symbol == const_cast<Name&>(it->first).getName()[0]) {
			abonent.erase(it);
		}
	}

	i = 1;


	for (const auto& it : abonent) {
		cout << i++ << " " << left << setw(20) << it.first
			<< left << setw(15) << it.second << "\n";
	}

	return 0;
}
