#include<iostream>
using namespace std;
template<class T>
class  Sum{
    T num1, num2;
    public:
    Sum(T n1, T n2){
        num1 = n1;
        num2 = n2;
    }
    void outSum(){
        cout<<"The sum is "<<num1+num2<<endl;
    }
};
int main(){
    Sum<float> S1(10.5,11.4);
    S1.outSum();
    return 0;
}