#include "Book.h"

bool LIBRARY::Avaliability()
{
    if (m_availability)
    {
        cout << "The book is available" << endl;
        return true;
    }
    else {
        cout << "The book is not available" << endl;
        return false;
    }
}

void LIBRARY::take()
{
    cout << "Book number " << m_number << " is taken" << endl;
    m_availability = false;
}

void LIBRARY::ret()
{
    cout << "Book number " << m_number << " is returned" << endl;
    m_availability = true;
}

void BOOK::show()
{
    cout << "Book: " << m_name << endl;
    cout << "Autor: " << m_autor << endl;
    cout << "Quantity of pages: " << m_count << endl;
    cout << endl;
}

void show_all(LIBRARY* a, const int& size)
{
    for (int i = 0; i < size; i++) {
        a[i].show();
    }
}
