#include "Classes.h"


void A::randA(A* arrA,  int size) {
	for (int i = 0; i < size; i++) {
		arrA[i].setX(rand() % 250);
	}
}


void B::printB(B* arrB) {
	for (int i = 0; i < getCountB(); i++) {
		cout << arrB[i].getY() << "  ";
	}
}

void C::printC(C* arrC) {
	for (int i = 0; i < getCountC(); i++) {
		cout << arrC[i].getZ() << "  ";
	}
}

void C::printSameElements(A* arrA, int size) {
	for (int i = 0; i < size; i++) {
		if (arrA[i].getX() % 7 == 3 && arrA[i].getX() % 5 == 2) {
			cout << arrA[i].getX() << " ";
		}
	}
}

void B::randB(B* arrB, A* arrA, int size) {
	for (int i = 0, j = 0; i < size; i++) {
		if (arrA[i].getX() % 7 == 3) {
			arrB[j++].setY(arrA[i].getX());
		}
	}
}

void C::randC(C* arrC, A* arrA, int size) {
	for (int i = 0, j = 0; i < size; i++) {
		if (arrA[i].getX() % 5 == 2) {
			arrC[j++].setZ(arrA[i].getX());
		}
	}
}

void A::printA(A* arrA, int size) {
	for (int i = 0; i < size; i++) {
		if (arrA[i].getX() % 7 == 3) {
			m_countB++;
		}
		else if (arrA[i].getX() % 5 == 2) {
			m_countC++;
		}
		cout << arrA[i].getX() << "  ";
	}
}