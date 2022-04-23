#include<iostream>
using namespace std;
class rectangle; //class declaration
class rectangle { //class defination
    int len;
    int br;
    public:
    void setLength(int len, int br){
        this->len = len;
        this->br = br;
    }
    int getArea(){
        return len*br;
    }
};

int main(){
    int l, b;
    rectangle a1;
    cout<<"Enter length: ";
    cin>>l;
    cout<<"Enter breadth: ";
    cin>>b;
    a1.setLength(l, b);
    cout<<"The required area is: "<<a1.getArea()<<endl;
    return 0;
}