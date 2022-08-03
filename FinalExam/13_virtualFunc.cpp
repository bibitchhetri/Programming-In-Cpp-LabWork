#include<iostream>
using namespace std;
class Instrument  {
    public:
    virtual void Display(){
        cout<<"Instrument Playing..."<<endl;
    }
};
class Guitar: public Instrument{
    public:
    void Display(){
        cout<<"Guitar Playing..."<<endl;
    }
};
int main(){
    Instrument *ptr = new Guitar();
    ptr->Display();
    return 0;
}