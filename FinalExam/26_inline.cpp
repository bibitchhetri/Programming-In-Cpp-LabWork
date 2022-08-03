#include<iostream>
using namespace std;
inline int sum(int a, int b = 4){ //with default arguement
    return a+b;
}
int main(){
    int a = 10;
    int b = 20;
    cout<<"The sum of a and b is : "<<sum(10,20)<<endl;
    cout<<"The sum of a and b is : "<<sum(10)<<endl;
    return 0;
}