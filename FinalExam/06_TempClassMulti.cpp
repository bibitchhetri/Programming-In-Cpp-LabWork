#include<iostream>
using namespace std;
template<class T1, class T2>
class  Sum{
    T1 num1;
    T2 num2;
    public:
    Sum(T1 n1, T2 n2){
        num1 = n1;
        num2 = n2;
    }
    void outSum(){
        cout<<"The sum is "<<num1+num2<<endl;
    }
};
int main(){
    Sum<int,float> S1(10,11.4);
    S1.outSum();
    return 0;
}