#include<iostream>
using namespace std;
class Math {
    float principal, time, rate, interest;
    public:
    Math(){
        principal = 0;
        time = 0;
        rate = 0;
        interest = 0;
    }
    Math(float P, float T, float R = 12.5){    //rate as default arguement
        principal = P;
        time = T;
        rate = R;
        interest = (P*T*R)/100;
    }
    void display(){
        cout<<"Principal: "<<principal<<endl;
        cout<<"Time: "<<time<<endl;
        cout<<"Rate: "<<rate<<endl;
        cout<<"Simple Interest: "<<interest<<endl;   
    }

};
int main(){
    Math SI1(1000,1);
    SI1.display();
    return 0;
}