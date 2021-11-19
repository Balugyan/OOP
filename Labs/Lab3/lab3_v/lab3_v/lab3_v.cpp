#include "Classes.h"

int A::m_countB = 0;
int A::m_countC = 0;

int main() {
	srand(time(NULL));
	const int size = 10;
	A arrA[size];
	A::randA(arrA, size);
	A::printA(arrA, size);


	cout << "\nCount of elements which % 7 == 3: " << A::getCountB() << "\n";
	int sizeB = A::getCountB();
	B* arrB = new B[sizeB];
	B::randB(arrB, arrA, size);
	B::printB(arrB);

	cout << "\nCount of elements which % 5 == 2: " << A::getCountC() << "\n";
	int sizeC = A::getCountC();
	C* arrC = new C[sizeC];
	C::randC(arrC, arrA, size);
	C::printC(arrC);

	cout << "\nElements which % 5 == 2 and % 7 == 3: " << "\n";
	C::printSameElements(arrA, size);


	//delete[] arrB;
	//delete[] arrC;
	return 0;
}
