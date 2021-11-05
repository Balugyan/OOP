#include "Comp.h"

int Comp::setSize() {
    int size;
    cout << "Enter an even number: ";
    do {
        cin >> size;
        if ((size % 2 != 0) || size <= 0) {
            cout << "Invalid input.Try again.\n";
        }
    } while ((size % 2 != 0) || size <= 0);
    cin.ignore();
    return size;
}

void Comp::complex(Comp* arr, int size, string* comp) {
    cout << "Complex numbers:\n";
    for (int i = 0; i < size/2; i++) {
        char sign = (arr[i].m_num > 0) ? '+' : '-';
        comp[i] = to_string(arr[i].m_num2) + " " + sign + " " + to_string(abs(arr[i].m_num)) + "i";
         cout << to_string(arr[i].m_num2)<< " " << sign << " " << to_string(abs(arr[i].m_num)) << "i" << "\n";
    }
}


void write(string p, int size, Comp* arr) {
    ofstream fout(p);
    int real = 0; int imag = 0;

    for (int i = 0; i < size / 2; i++) {
  
        real = rand() % (50-10+1)+10;
        imag = rand() % (40 - 10 + 1) + 10;

        arr[i].setNum(real);
        arr[i].setNum2(imag);
        fout << arr[i];
      
    }
    cout << "Written to the file.\n";
    fout.close();
}
void read(string p, int size, Comp* arr) {
    ifstream fin;
    try {
        fin.open(p);
        cout << "File opened.\n";
    }
    catch (const std::exception& ex) {
        cout << "Error opening file.\n";
    }
    for (int i = 0; !fin.eof(); i++) {
        fin >> arr[i];
    }
    fin.close();
}
void print(int size, Comp* arr) {
    for (int i = 0; i < size/2; i++) {
        cout << arr[i];
    }
}
void complexInFile(string* comp, Comp* arr, int size) {
    ofstream fout("Complex.txt");

    for (int i = 0; i < size/2; i++) {
        fout << comp[i] << "\n";
    }
    cout << "Written to the file.\n";
    fout.close();
}

ostream& operator<<(ostream& out, Comp& arr) {
    out << arr.m_num << " " << arr.m_num2 << "\n";
    return out;
}
istream& operator>>(istream& in, Comp& arr) {
    in >> arr.m_num >> arr.m_num2;
    return in;
}
