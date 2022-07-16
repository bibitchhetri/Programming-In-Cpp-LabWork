#include <iostream>
using namespace std;

class Time
{
    int hr, min, sec;

public:
    void get()
    {
        cout <<endl<<"Enter Hour: ";
        cin >> hr;
        cout <<endl<<"Enter Minutes: ";
        cin >> min;
        cout <<endl<<"Enter Seconds: ";
        cin >> sec;
    }

    void disp()
    {
        cout << "[ " << hr << ":" << min << ":" << sec << " ]"<<endl;
    }
    void sum(Time &, Time &);
};

void Time::sum(Time &t1, Time &t2)
{
    sec = t1.sec + t2.sec;
    min = sec / 60;
    sec = sec % 60;
    min = min + t1.min + t2.min;
    hr = min / 60;
    min = min % 60;
    hr = hr + t1.hr + t2.hr;
}

int main()
{
    Time t1, t2, t3;
    cout <<endl<<"Enter 1st Time Details : ";
    t1.get();
    cout <<endl<<"Enter 2nd Time Details : ";
    t2.get();
    cout <<endl<<"The 1st Time entered is : ";
    t1.disp();
    cout <<endl<<"The 2nd Time entered is : ";
    t2.disp();

    t3.sum(t1, t2);

    cout <<endl<<"The Sum of two Times are : ";

    t3.disp();

    return 0;
}