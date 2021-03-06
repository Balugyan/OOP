#pragma once
#include "Persona.h"
class Student : public Persona
{
public:
	int mas[5];
	Student(string n, int a) :Persona(n, a) {
		srand(time(NULL));
		for (int i = 0; i < 5; i++)
		{
			mas[i] = 1 + rand() % 5;
		}
	}
	Student() {}
	void printMarks() {
		cout << setw(12) << "Marks: ";
		for (int i = 0; i < 5; i++)
		{
			cout << mas[i] << " ";
		}
		cout << endl;
	}
	void print() override {
		cout << endl;
		cout << setw(12) << "Student: " << name << endl;
		cout << setw(12) << "Age: " << age << endl;
		printMarks();
	}
	int who() override {
		return 3;
	}
	int findTwos() {
		int res = 0;
		for (int i = 0; i < 5; i++)
		{
			if (mas[i] == 2)
			{
				res++;
			}
			else if (mas[i] == 1) {
				res++;
			}
		}
		return res;
	}
	int ask() override {
		cout << "Number of 2: " << findTwos() << endl;
		return findTwos();
	}
};