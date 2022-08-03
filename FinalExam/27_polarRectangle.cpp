#include<iostream>
#include<math.h>
using namespace std;
class Polar {
    float r, th;
    public:
    Polar(){}
    Polar(float r, float th){
        this->r = r;
        this->th = th;
    }
    void show(){
        cout<<"Polar form: "<<endl
        <<"r = "<<r<<endl
        <<"th = "<<th<<endl;
    }
    float getR(){
        return r;
    }
    float getTh(){
        return th;
    }
};
class Rectangular {
    float x , y;
    public:
    Rectangular(){}
    Rectangular(int x, int y){
        this->x = x;
        this->y = y;
    }
    Rectangular(Polar P){
        x = P.getR()*sin(P.getTh());
        y = P.getTh()*cos(P.getTh());
    }  
    void display(){
        cout<<"Value of X = "<<x<<endl
        <<"Value of Y = "<<y<<endl;
    }
};
int main(){
    Polar P(5.5,3.14/2);
    Rectangular R = P;
    R.display();
    return 0;
}