#include<iostream>
using namespace std;

template <class T>
T Sum(T a, T b){
    T add = a + b;
}
int main(){
    cout<<"The sum is: "<<Sum<int>(10,20)<<endl;
    return 0;
}