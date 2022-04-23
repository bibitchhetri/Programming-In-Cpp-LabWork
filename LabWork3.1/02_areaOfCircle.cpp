#include<iostream>
using namespace std;
#define PI 3.14
class circle{
    float rad;
    public:
    void getRadius(){
        cout<<"Enter Radius: ";
        cin>>rad;
    }
    void printArea(){
        cout<<"The area of circle is: "<<PI*rad*rad<<endl;
    }
};
int main(){
    circle c1;
    c1.getRadius();
    c1.printArea();
    return 0;
}