#include<iostream>
using namespace std;

class complex{
    int real, imag;
    public:
    void setData(){
        cout<<"Enter real value: ";
        cin>>real;
        cout<<"Enter imaginary value: ";
        cin>>imag;
    }
    friend void calcData(complex, complex);
    void display(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};
void calcData(complex C1, complex C2){
    int sumReal = C1.real + C2.real; 
    int sumImag = C1.imag + C2.imag;
    cout<<sumReal<<" + "<<sumImag<<"i"<<endl;
}
int main(){
    int r1, i1;
    complex C1, C2;
    C1.setData();
    C2.setData();
    cout<<"The Complex Sum is: "<<endl;
    C1.display();
    C2.display();
    cout<<"------"<<endl;
    calcData(C1,C2);
    return 0;
}