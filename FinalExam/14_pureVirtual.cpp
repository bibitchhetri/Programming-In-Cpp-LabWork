#include<iostream>
using namespace std;
class Instrument  {
    public:
    virtual void Display()= 0;
};
class Guitar: public Instrument{
    public:
    void Display(){
        cout<<"Guitar Playing..."<<endl;
    }
};
class Piano: public Instrument{
    public:
    void Display(){
        cout<<"Piano Playing..."<<endl;
    }
};
int main(){
    Instrument *ptr = new Guitar();
    ptr->Display();
    Instrument *ptr1 = new Piano();
    ptr1->Display();
    return 0;
}