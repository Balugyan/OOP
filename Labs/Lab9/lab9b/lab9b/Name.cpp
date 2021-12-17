#include "Name.h"

Name::Name(string name) {
	m_name = name;
}

string Name::getName() {
	return m_name;
}

bool operator<(const Name& name1, const Name& name2) {
	return name1.m_name < name2.m_name;
}

ostream& operator<<(ostream& out, Name name) {
	out << name.m_name;
	return out;
}