#include<iostream>
using namespace std;
class A {
    private:
    int num1;
    public:
    A(){
        num1 = 10;
    }
    void display(){
        cout<<"Class A num1 is : "<<num1;
    }
};
class B {
    int num2;
    A obj;
    public:
    B(){
        num2 = 20;
    }
    void display(){
        obj.display();
        cout<<"Class B num2 is : "<<num2<<endl;
    }
};
int main(){
    B objB;
    objB.display();
    return 0;
}