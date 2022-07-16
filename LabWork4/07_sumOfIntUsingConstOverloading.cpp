#include<iostream>
using namespace std;
class Sum {
    int num1, num2, num3;
    public:
    Sum(){

    }
    Sum(int num1, int num2){
        this->num1 = num1;
        this->num2 = num2;
    }
    Sum(int num1, int num2, int num3){
        this->num1 = num1;
        this->num2 = num2;
        this->num3 = num3;
    }
    void getTwoSum(){
        cout<<"Sum of two numbers is: "<<num1+num2<<endl;
    }
    void getThreeSum(){
        cout<<"Sum of three numbers is: "<<num1+num2+num3<<endl;
    }
};
int main(){
    int num1, num2, num3;
    cout<<"Enter three numbers: ";
    cin>>num1>>num2>>num3;
    Sum S1(num1, num2), S2(num1,num2,num3);\
    S1.getTwoSum();
    S2.getThreeSum();
    return 0;
}