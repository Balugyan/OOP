#include "Comp.h"

int main()
{
    srand(time(NULL));
    string p = "Real.txt";
    int size = Comp::setSize();

    Comp* arr = new Comp[size];
    string* comp = new string[size/2];

    for(;;) {

        int numb;
        cout << "1. To write in file\n";
        cout << "2. To read from file\n";
        cout << "3. To create complex numbers\n";
        cout << "4. To write complex numbers in the file\n";
        cout << "5. Exit\n";
        cin >> numb;
        cin.ignore();

        switch (numb) {
        case 1: {
            write(p, size, arr);
            system("pause");
            system("cls");
            break;
        }
        case 2: {
            read(p, size, arr);
            print(size, arr);
            system("pause");
            system("cls");
            break;
        }
        case 3: {
            Comp::complex(arr, size, comp);
            system("pause");
            system("cls");
            break;
        }
        case 4: {
            complexInFile(comp, arr, size);
            system("pause");
            system("cls");
            break;
        }
        case 5: {
            system("cls");
            exit(0);
            break;
        }
        }
    }
    return 0;
}
