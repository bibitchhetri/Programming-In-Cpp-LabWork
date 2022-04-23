#include<iostream>
using namespace std;

class square{
    int len;
    public:
    void getLength(){
        cout<<"Enter Length: ";
        cin>>len;
    }
    void printArea(){
        cout<<"The area of Square is: "<<len*len<<endl;
    }
    void printPerimeter(){
        cout<<"The perimeter of Square is: "<<4*len<<endl;
    }
};

int main(){
    square s1;
    s1.getLength();
    s1.printArea();
    s1.printPerimeter();
    return 0;
}