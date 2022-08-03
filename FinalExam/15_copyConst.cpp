#include<iostream>
using namespace std;
class Number {
    int a;
    public:
    Number(){}
    Number(int a){
        this->a = a;
    }
    Number(Number &N2){
        a = N2.a;
        cout<<"Copy Constructor Called"<<endl;
    }
    void display(){
        cout<<"The number for this object is: "<<a<<endl;
    }
};
int main(){
    Number N1(45);
    N1.display();
    Number N2(N1);
    N2.display();
    return 0;
}