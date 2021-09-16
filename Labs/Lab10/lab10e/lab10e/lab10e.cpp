#include <iostream>
#include <iomanip>
using namespace std;
class Matrix
{
private:
    int n, m;
    int** arr;
public:
    Matrix() {
        n = m = 1;
        arr = new int* [n];
        for (int i = 0; i < 1; i++) {
            arr[i] = new int[m];
        };
    }
    Matrix(int n_size, int m_size) {
        n = n_size;
        m = m_size;
        arr = new int* [n];
        for (int i = 0; i < n; i++) {
            arr[i] = new int[m];
        };
    }
    ~Matrix() {
        for (int i = 0; i < n; i++)
            delete arr[i];
        delete[]arr;
    }
    void Rand() {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                arr[i][j] = rand() % 100;
    }
    void Print()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << setw(3) << arr[i][j];
            }
            std::cout << endl;
        }
    }
    void Min() {
        int min;
        int min_index_1, min_index_2;
        min = arr[0][0];
        for (int i = 0; i < n; i++)
            for (int j = 1; j < m; j++)
                if (min > arr[i][j])
                {
                    min = arr[i][j];
                    min_index_1 = i;
                    min_index_2 = j;
                }
        cout << "\nMin element = " << min << endl;
    }
    void Find() {
        int index_1, index_2, num;
        cout << "\nEnter the first index of the element you want to find: ";
        cin >> index_1;
        cout << "Enter the second index of the element you want to find: ";
        cin >> index_2;
        cout << "Element = " << arr[index_1][index_2] << endl;
        cout << "Enter a number: ";
        cin >> num;
        arr[index_1][index_2] = num;
        cout << "Element = " << arr[index_1][index_2] << endl;
    }
    void Submatrix() {
        int num_1, num_2, a, b;
        cout << "\nSubmatrix position:\nEnter the first number: ";
        cin >> num_1;
        cout << "Enter the second number: ";
        cin >> num_2;
        cout << "\nSubmatrix size:\nEnter the first number: ";
        cin >> a;
        cout << "Enter the second number: ";
        cin >> b;
        for (int i = num_1; i < num_1 + a; i++)
        {
            for (int j = num_2; j < num_2 + b; j++)
            {
                cout << setw(3) << arr[i][j];
            }
            cout << endl;
        }
    }
};
int main()
{
    Matrix a(5, 6);
    a.Rand();
    a.Print();
    a.Min();
    a.Find();
    a.Submatrix();
    return 0;
}