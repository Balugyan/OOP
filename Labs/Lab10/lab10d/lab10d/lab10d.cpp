#include <iostream>
#include <string.h>
using namespace std;
#define N 3
class train {
public:
    char m_name[100];
    int m_number, m_time;
    void Print() {
        cout << "Train number: " << m_number << endl;
        cout << "Destination name: " << m_name << endl;
        cout << "Departure time: " << m_time << endl;
        cout << endl;
    }
    void Input() {
        cout << "Input a train number: ";
        cin >> m_number;
        cout << "Input a destination name: ";
        cin >> m_name;
        cout << "Input a departure time(h): ";
        cin >> m_time;
        cout << endl;
    }
};
int main()
{
    train trains[N];
    for (int i = 0; i < N; i++) {
        trains[i].Input();
    }
    cout << endl;
    //сортировка по номерам поездов
    cout << "Sorting by train numbers\n1. Descending sorting\n2. Ascending sorting\n";
    int num;
    cout << "Input a number: ";
    cin >> num;
    cout << endl;
    if (num == 1) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (trains[i].m_number > trains[j].m_number) {
                    swap(trains[i], trains[j]);
                }
            }
        }
        for (int i = 0; i < N; i++) {
            trains[i].Print();
        }
    }
    else if (num == 2) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (trains[i].m_number < trains[j].m_number) {
                    swap(trains[i], trains[j]);
                }
            }
        }
        for (int i = 0; i < N; i++) {
            trains[i].Print();
        }
    }
    else {
        cout << "Invalid input.";
    }
    cout << endl;
    //поиск;
    int train_number;
    cout << "Train search\nInput a train number: ";
    cin >> train_number;
    cout << endl;
    for (int i = 0; i < N; i++) {
        if (trains[i].m_number == train_number) {
            trains[i].Print();
        }
    }
    cout << endl;
    //сортировка по пункту назначения
    cout << "Sorting by destination:\n\n";
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            int res = strcmp(trains[j].m_name, trains[j + 1].m_name);
            if (res == 1)
                swap(trains[j], trains[j + 1]);
            else if (res == 0) {
                if (trains[j].m_time > trains[j + 1].m_time)
                    swap(trains[j], trains[j + 1]);
            }
        }
    }
    for (int i = 0; i < N; i++) {
        trains[i].Print();
    }
    return 0;
}