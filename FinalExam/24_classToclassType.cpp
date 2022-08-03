#include<iostream>
using namespace std;
class  Rectangle {
    int length, breadth;
    public:
    Rectangle(){
        length = 0;
        breadth = 0;
    }
    Rectangle(int l, int b){
        length = l;
        breadth = b;
    }
    void output(){
        cout<<"Length : "<<length<<endl
        <<"Breadth : "<<breadth<<endl
        <<"Area : "<<length*breadth<<endl;
    }
};
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
    operator Rectangle(){
        Rectangle temp(base,height);
        return temp;
    }
};
int main(){
    Triangle T1(2,3);
    Rectangle R1 = T1;
    R1.output();
    return 0;
}