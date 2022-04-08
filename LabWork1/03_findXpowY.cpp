#include<iostream>
using namespace std;

class Maths {
    int x,y;
    public:
    void setNum();
    void display();
};

void Maths :: setNum(){
    cout<<"Enter Coefficient i.e X: ";
    cin>>x;   
    cout<<"Enter Power to be raised i.e Y: ";
    cin>>y;   
}

void Maths :: display(){
    int temp = x;
    for (int i = 2; i <=  y; i++)
    {
        x *= temp;
    }
    cout<<"The Value of X^Y is: "<<x<<endl;
}
int main(){
    Maths Pow;
    Pow.setNum();
    Pow.display();
    return 0;
}