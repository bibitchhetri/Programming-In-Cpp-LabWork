#include <iostream>
using namespace std;

class time{
    int hour, minutes, second;

public:
    void setData(){
        cout << "Enter Hour: " << endl;
        cin >> hour;
        cout << "Enter Minutes: " << endl;
        cin >> minutes;
        cout << "Enter Second: " << endl;
        cin >> second;
    }
    void sumTime(time, time);
    void displaySumTime();
};

void time ::sumTime(time T1, time T2){
    hour = T1.hour + T2.hour;
    minutes = T1.minutes + T2.minutes;
    second = T1.second + T2.second;
    do{
        hour = hour + (minutes / 60) + (second / 120);
        minutes = minutes % 60 + ((second % 120)) / 60;
        second = (second % 120) % 60;
    } while (minutes >= 60 && second >= 60);
}

void time ::displaySumTime(){
    cout << "Summation of time for new object: " << endl;
    cout << "Hour: " << hour << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Second: " << second << endl;
}
int main(){
    class time T1, T2, T3;
    T1.setData();
    T2.setData();
    T3.sumTime(T1, T2);
    T3.displaySumTime();
    return 0;
}