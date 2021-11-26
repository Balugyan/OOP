#include "Time.h"

int main()
{
    Time time1, time2;
    int num;
    string partDay;
    int hours, minutes, seconds;


    do {
        cout << "Enter hours first object: ";
        cin >> hours;
        if (hours >= 1 && hours <= 12) {
            break;
        }
        else {
            system("cls");
            cout << "Invalid input.\nHours (1 - 12)\n";
        }
    } while (true);
    time1.setHours(hours);
    do {
        cout << "Enter minutes first object: ";
        cin >> minutes;
        if (minutes >= 0 && minutes <= 60) {
            break;
        }
        else {
            system("cls");
            cout << "Invalid input.\nMinutes (0 - 60)\n";
        }
    } while (true);
    time1.setMinutes(minutes);
    do {
        cout << "Enter seconds first object: ";
        cin >> seconds;
        if (seconds >= 0 && seconds <= 60) {
            break;
        }
        else {
            system("cls");
            cout << "Invalid input.\nSeconds (0 - 60)\n";
        }
    } while (true);
    time1.setSeconds(seconds);
    do {
        cout << "Enter part day of first object: ";
        cin >> partDay;
        if (partDay == "pm" || partDay == "am") {
            break;
        }
        else {
            system("cls");
            cout << "Invalid input.\n(pm - am)\n";
        }
    } while (true);
    time1.setPartDay(partDay);
    system("cls");

    do {
        cout << "Enter hours second object: ";
        cin >> hours;
        if (hours >= 1 && hours <= 12) {
            break;
        }
        else {
            system("cls");
            cout << "Invalid input.\nHours (1 - 12)\n";
        }
    } while (true);
    time2.setHours(hours);
    do {
        cout << "Enter minutes second object: ";
        cin >> minutes;
        if (minutes >= 0 && minutes <= 60) {
            break;
        }
        else {
            system("cls");
            cout << "Invalid input.\nMinutes (0 - 60)\n";
        }
    } while (true);
    time2.setMinutes(minutes);
    do {
        cout << "Enter seconds second object: ";
        cin >> seconds;
        if (seconds >= 0 && seconds <= 60) {
            break;
        }
        else {
            system("cls");
            cout << "Invalid input.\nSeconds (0 - 60)\n";
        }
    } while (true);
    time2.setSeconds(seconds);
    do {
        cout << "Enter part day of second object: ";
        cin >> partDay;
        if (partDay == "pm" || partDay == "am") {
            break;
        }
        else {
            system("cls");
            cout << "Invalid input.\n(pm - am)\n";
        }
    } while (true);
    time2.setPartDay(partDay);
    system("cls");

    for (;;) {
        cout << "1. Print\n";
        cout << "2. Difference\n";
        cout << "3. To compare\n";
        cout << "4. To find the angle\n";
        cout << "Enter a number: ";
        cin >> num;
        switch (num) {
        case 1: {
            cout << "First:\n";
            time1.printTime();
            cout << "Second:\n";
            time2.printTime();
            std::system("pause");
            std::system("cls");
            break;
        }
        case 2: {
            Time time3;   
            time3.difference(time1,time2);
            std::system("pause");
            std::system("cls");
            break;
        }
        case 3: {
            cout << "First:\n";
            time1.printTime();
            cout << "Second:\n";
            time2.printTime();
            cout << "\n";
            time1.compare(time1, time2);
            std::system("pause");
            std::system("cls");
            break;
        }
        case 4: {
            int angle;
            int h = 360 / 12 * time1.getHours();
            int min = 360 / 60 * time1.getMinutes();
            angle = abs(h - min);
            angle = (angle > (360 / 2) ? (360 - angle) : angle);
            cout << "Angle: " << angle << "\n\n";
            std::system("pause");
            std::system("cls");
            break;
        }
       
        }
    }

    return 0;
}
