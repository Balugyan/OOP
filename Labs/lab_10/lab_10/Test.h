#pragma once
#include "Numbers.h"

template <class T>
class Test {
protected:
	int* testInteger;
	double* testDouble;
	char* testCharachter;
	int size;

	int testMinInteger;
	double testMinDouble;
	char testMinCharachter;

	int testSumInteger;
	double testSumDouble;
	char testSumCharachter;

	Numbers<T> number;
public:

	Test();
	~Test();


	void testMin();
	void testSort();
	void testSum();

	void testSortEmulatedSituation();
	void testMinEmulatedSituation();
	void testSumEmulatedSituation();

	void print();
};