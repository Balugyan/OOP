#include "Line.h"

void Line::printInFile(Line line, string p) {
	ofstream fout;

	try {
		fout.open(p);
		cout << "The line was written to the file." << endl;
	}
	catch (const std::exception& ex) {
		cout << "Error opening file." << endl;
	}
	fout << line;
	fout << "\n\n";
	fout.close();

}

void Line::printInFile2(Line line, string p) {
	ofstream fout;
	string temp = getLine();
	try {
		fout.open(p, ios::app);
		cout << "The modified line was written to the file."<<endl;
	}
	catch (const std::exception& ex) {
		cout << "Error opening file."<<endl;
	}
	int size = getSize();

	for (int i = 0; i < size; i++) {
		if (isupper(temp[i]) || isdigit(temp[i])) {
			continue;
		}
		else {
			fout << temp[i];
		}
	}

	fout.close();
}

ostream& operator<<(ostream& out, Line line) {
	out << line.m_line;
	return out;
}

int Line::getSize()
{
	return m_line.length();
}