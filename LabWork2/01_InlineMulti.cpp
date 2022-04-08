#include<iostream>
using namespace std;

inline int multiply(int n1, int n2){
    return n1 * n2;
}

int main(){
    int num1, num2;
    cout<<"Enter Two Numbers: ";
    cin>>num1>>num2;
    cout<<num1<<" X "<<num2<<" = "<<multiply(num1,num2)<<endl;
    return 0;
}