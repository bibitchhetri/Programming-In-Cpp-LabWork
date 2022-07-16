#include<iostream>
using namespace std;
class Triangle;
class Rectangle;
class Shape {
    protected:
    int length, breadth, height;
    public:
    Shape(){  //default constructor
        length = 0;
        breadth = 0;
        height = 0;
    }
    Shape(int h){
        height = h;
    }
    Shape(int l, int b){
        length = l;
        breadth = b;
    }
};

class Triangle: public Shape{
    int base;
    public:
    Triangle(int h):Shape(h){}
    void setBase(int base){
        this->base = base;
    }
    float getTriArea(){
        return 0.5*base*height;
    }
};

class Rectangle: public Shape{
    public:
    Rectangle(int l, int b):Shape(l,b){}
    int getRectArea(){
        return length*breadth;
    }
};
int main(){
    int l,b,h,base;
    cout<<"Enter Length: ";
    cin>>l;
    cout<<"Enter Breadth: ";
    cin>>b;
    cout<<"Enter Heigth: ";
    cin>>h;
    cout<<"Enter Base: ";
    cin>>base;
    Triangle T1(h);
    T1.setBase(base);
    cout<<"----------------------------------------"<<endl;
    cout<<"Area of Triangle is: "<<T1.getTriArea()<<endl;
    cout<<"----------------------------------------"<<endl;
    Rectangle R1(l,b);
    cout<<"----------------------------------------"<<endl;
    cout<<"Area of Rectangle is: "<<R1.getRectArea()<<endl;
    cout<<"----------------------------------------"<<endl;
    // Rectangle R1;
    // cout<<"Area of Rectangle is: "<<R1.getRectArea()<<endl;
    return 0;
}