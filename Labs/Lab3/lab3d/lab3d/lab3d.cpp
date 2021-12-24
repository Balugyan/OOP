#include <iostream>
#include <iomanip>
#include <conio.h>
#include <vector>
#include <string>
#include "Persona.h"
#include "Prepod.h"
#include "Zav_kaf.h"
#include "Student.h"
#include "VUZ.h"
using namespace std;

int main()
{
    VUZ vuz;
    int a, b;
    do
    {
        vuz.print();
        cout << endl; cout << setw(15) << "Prepod > 50 - 1" << endl; cout << setw(15) << "Student 2's - 2" << endl; cout << setw(14) << "  Enter:  ";
        cin >> a;
        switch (a)
        {
        case 1:
            system("cls");
            vuz.print50();
            system("pause");
            system("cls");
            break;
        case 2:
            system("cls");
            vuz.printStud2();
            system("pause");
            system("cls");
            break;
        default:
            break;
        }
    } while (a <= 3 && a >= 0);
}
