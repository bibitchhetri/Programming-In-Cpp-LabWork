#include<iostream>
using namespace std;
class  Triangle {
    int base, height;
    public:
    Triangle(int b, int h){
        base = b;
        height = h;
    }
    void print(){
        cout<<"Base : "<<base<<endl
        <<"Height : "<<height<<endl
        <<"Area : "<<0.2*base*height<<endl;
    }
    int getBase(){return base;}
    int getHeight(){return height;}
};
class  Rectangle {
    int length, breadth;
    float area;
    public:
    Rectangle(){
        length = 0;
        breadth = 0;
        area = 0;
    }
    Rectangle(int l, int b){
        length = l;
        breadth = b;
        area = length*breadth;
    }
    void output(){
        cout<<"Length : "<<length<<endl
        <<"Breadth : "<<breadth<<endl
        <<"Area : "<<area<<endl;
    }
    Rectangle(Triangle t){
        length = t.getHeight();
        breadth = t.getBase();
        area = length*breadth;
    }
};
int main(){
    Triangle T1(2,3);
    Rectangle R1(T1);
    R1.output();
    return 0;
}