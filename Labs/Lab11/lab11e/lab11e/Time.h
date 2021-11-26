#pragma once

#include <iostream>
#include<iomanip>
using namespace std;

class Time {
private:
    int m_hours, m_minutes, m_seconds;
    string m_partDay;
public:
    void printTime();
    void setHours(int& hours);
    void setMinutes(int& minutes);
    void setSeconds(int& seconds);
    void setPartDay(string& partDay);
    int getHours();
    int getMinutes();
    int getSeconds();
    string getPartDay();
    void difference(const Time& time1, const Time& time2);
    void compare(Time time1, Time time2);

};
