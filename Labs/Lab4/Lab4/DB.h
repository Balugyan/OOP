#pragma once

#include "Antelope.h"

class DB : public Antelope
{
	static int size;
	Antelope* arr;

public:
	DB();
	DB(string name, string group, string habitat, unsigned int population_size);
	~DB();
	void add();
	void del();
	void sort(DB& ob);
	void show();
	int getSize() {
		return size;
	}
};