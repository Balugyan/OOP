#include "Time.h"



void Time::setHours(int& hours) {
    m_hours = hours;
}
void Time::setMinutes(int& minutes) {
    m_minutes = minutes;
}
void Time::setSeconds(int& seconds) {
    m_seconds = seconds;
}
void Time::setPartDay(string& partDay) {
    m_partDay = partDay;
}
int Time::getHours() {
    return m_hours;
}
int Time::getMinutes() {
    return m_minutes;
}
int Time::getSeconds() {
    return m_seconds;
}
string Time::getPartDay() {
    return m_partDay;
}

void Time::difference(const Time& time1, const Time& time2)
{

    cout << "Difference: \n";
    cout << time1.m_hours<<" - "<< time2.m_hours<<" = "<< abs(time1.m_hours - time2.m_hours)<<endl;
    cout << time1.m_minutes << " - " << time2.m_minutes << " = " << abs(time1.m_minutes - time2.m_minutes)<<endl;
    cout << time1.m_seconds << " - " << time2.m_seconds << " = " << abs(time1.m_seconds - time2.m_seconds)<<endl<<endl;
    cout << setfill('0') << setw(2) << abs(time1.m_hours - time2.m_hours) << ":"
        << setfill('0') << setw(2) << abs(time1.m_minutes - time2.m_minutes) << ":"
        << setfill('0') << setw(2) << abs(time1.m_seconds - time2.m_seconds) << "  "
        << "\n\n";
    
}

void Time::compare(Time time1, Time time2)
{
    if (time1.getHours() == time2.getHours()) {
        if (time1.getMinutes() == time2.getMinutes()) {
            if (time1.getSeconds() == time2.getSeconds()) {
                cout << "the first time == the second time"<<endl;
            }
            else if (time1.getSeconds() > time2.getSeconds()) {
                cout << "the first time > the second time\n\n";
            }
            else {
                cout << "the first time < the second time\n\n";
            }
        }
        else if (time1.getMinutes() > time2.getMinutes()) {
            cout << "the first time > the second time\n\n";
        }
        else {
            cout << "the first time < the second time\n\n";
        }
    }
    else if (time1.getHours() > time2.getHours()) {
        cout << "the first time > the second time\n\n";
    }
    else {
        cout << "the first time < the second time\n\n";
    }

}

void Time::printTime() {
    cout << setfill('0') << setw(2) << m_hours << ":"
        << setfill('0') << setw(2) << m_minutes << ":"
        << setfill('0') << setw(2) << m_seconds << "  "
        << m_partDay << "\n\n";
}
