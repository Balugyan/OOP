#include "Number.h"

Number::Number(string number) {
	m_number = number;
}

string Number::getNumber() {
	return m_number;
}

ostream& operator<<(ostream& out, Number number) {
	out << number.m_number;
	return out;
}