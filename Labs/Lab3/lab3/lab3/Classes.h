#pragma once
#include <iostream>		
using namespace std;

class B
{
    int m_b;
public:
    B() : m_b(0) { };
    B(int b) { m_b = b; }
    virtual void show() {
        cout << "B: " << m_b << "\n";
    }
    
};

class D1 : public B
{
    int m_d1;
public:
    D1(int d1, int b)
        : B(b) {
        m_d1 = d1; 
    }

  void show() override {
      B::show();
      cout << "D1: " << m_d1 << '\n';
    }
};

class D2 : private B
{
    int m_d2;
public:

    D2(int d2, int b)
        : B(b) {
        m_d2 = d2;
    }
    void show () override
    {
        B::show();
        cout << "D2: " << m_d2 << '\n';
    }
};

class D3 : private D1, public D2
{
    int m_d3;
public:
    D3(int d1, int d2, int b, int d3)
        : D1(d1, b), D2(d2, b)
    {
        m_d3 = d3;
    }
    void show() override {
        D1::show();
        D2::show();
        cout << "D3: " << m_d3 << "\n";
    }
};