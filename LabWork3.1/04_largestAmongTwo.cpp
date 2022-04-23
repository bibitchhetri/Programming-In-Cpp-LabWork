#include<iostream>
using namespace std;
class large {
    int num1, num2;
    public:
    void get(){
        cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2;
    }
    int largest(){
        if(num1 > num2)
            return num1;
        else
            return num2;
    }
    void put(){
        cout<<"The largest number is: "<<largest()<<endl;
    }
};
int main(){
    large L1;
    L1.get();
    L1.largest();
    L1.put();
    return 0;
}