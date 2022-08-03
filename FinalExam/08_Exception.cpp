#include<iostream>
using namespace std;
class Divide {
    int num1, num2;
    float sum;
    public:
    Divide(){}
    Divide(int n1, int n2){
        num1 = n1;
        num2 = n2;
    }
    void div(){
        if (num2 == 0)
        throw num2;
        else {
            cout<<"The division is: "<<num1/num2<<endl;
        }
    }
};
int main(){
    Divide D1(10,2);
    D1.div();
    try{
        Divide D2(10,0);
        D2.div();
    }
    catch (int num2){
        cout<<"Cannot Divide by : "<<num2<<endl;
    }
    return 0;
}