#include<iostream>
using namespace std;
class Complex {
    int real, imag;
    public:
    Complex(){
        real = 0;
        imag = 0;
    }
    Complex(int r, int i){
        real = r;
        imag = i;
    }
    void display(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
    Complex operator + (Complex obj){
        Complex temp;
        temp.imag = imag + obj.imag;
        temp.real = real + obj.real;
        return temp;
    }
    
};
int main(){
    Complex C1(1,2), C2(2,3), C3;
    C3 = C1 + C2;
    C3.display();
    return 0;
}