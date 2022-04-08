#include<iostream>
using namespace std;

int add(int n1, int n2){
    return n1 + n2;
}

int main(){
    int num1, num2;
    cout<<"Enter Two Numbers: ";
    cin>>num1>>num2;
    cout<<"The Sum of Two Numbers is: "<<add(num1,num2)<<endl;
    return 0;
}