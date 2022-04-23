// Only For Conceptual Practice -- !Assignment
#include <iostream>
using namespace std;

class time{
    int hr, min, sec;

public:
    void setData(){
        this->hr = hr;
        this->min = min;
        this->sec = sec;
        cout << "Enter Hour: ";
        cin >> hr;
        cout << "Enter Minutes: ";
        cin >> min;
        cout << "Enter Second: ";
        cin >> sec;
    }
    // void setFromOutData(time, time);
    void setFromOutData(time, time, time);
};
// void time ::setFromOutData(time T1, time T2){
//     time T3;
//     T3.hr = T1.hr + T2.hr;
//     T3.min = T1.min + T2.min;
//     T3.sec = T1.sec + T2.sec;
//     cout<<"Time after Summation: "<<endl;
//     cout<<"Hour: "<<T3.hr<<endl;
//     cout<<"Minutes: "<<T3.min<<endl;
//     cout<<"Second: "<<T3.sec<<endl;
// }
void time ::setFromOutData(time T1, time T2, time T3){
    T3.hr = T1.hr + T2.hr;
    T3.min = T1.min + T2.min;
    T3.sec = T1.sec + T2.sec;
    cout<<"Hour: "<<T3.hr<<endl;
    cout<<"Minutes: "<<T3.min<<endl;
    cout<<"Second: "<<T3.sec<<endl;
}

int main(){
    class time T1, T2, T3;
    T1.setData();
    T2.setData();
    cout<<"--------------------------------"<<endl;
    cout<<"--------------------------------"<<endl;
    // T3.setFromOutData(T1,T2);
    cout<<"--------------------------------"<<endl;
    cout<<"--------------------------------"<<endl;
    T3.setFromOutData(T1,T2,T3);
    cout<<"Time while passing Three Objects as an arguement "<<endl;
    
    return 0;
}