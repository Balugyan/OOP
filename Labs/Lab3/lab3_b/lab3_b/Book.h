#pragma once
#include <iostream>
#include <string>
using namespace std;


class BOOK {
    string m_name;
    string m_autor;
    int m_count;
public:
    BOOK(string name = " ", string autor = " ", int count = 0) {
        m_name = name;
        m_autor = autor;
        m_count = count;
    }
    void show();
    string get_name() {
        return m_name;
    }
};

class LIBRARY : public BOOK
{
    int m_number;
    bool m_availability;
public: 
    LIBRARY(int number = 0, bool availability = false, string name = " ", string autor = " ", int count = 0)
        : BOOK(name, autor, count) {
        m_number = number;
        m_availability = availability;
    }

    bool Avaliability();
    void take();
    void ret();

};

void show_all(LIBRARY* a, const int& size);
