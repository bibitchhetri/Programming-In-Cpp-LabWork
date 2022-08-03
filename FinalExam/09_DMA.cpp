#include<iostream>
using namespace std;

int main(){
    int *ptr1 = new int;
    int *ptr2 = new int;
    int *ptr3 = new int;
    cout<<"Enter three numbers : ";
    cin>>*ptr1>>*ptr2>>*ptr3;
    int avg = (*ptr1+*ptr2+*ptr3)/3;
    cout<<"Average is: "<<avg<<endl;
    delete ptr1;
    delete ptr2;
    delete ptr3;
    return 0;
}