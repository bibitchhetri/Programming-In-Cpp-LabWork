#include<iostream>
using namespace std;
class Rectangle {
    int length, breadth;
    public:
    Rectangle(void){    //class as a function // Default Constructor
        length = 0;
        breadth = 0;
    }
    Rectangle(int l, int b){  //Parameterized Constructor
        length = l;
        breadth = b;
    }
    Rectangle(int val){  
        length = val;
        breadth = val;
    }
    int calcArea(){
        return length*breadth;
    }
    void displayArea(){
        cout<<"The required area is: "<<calcArea()<<endl;
    }
};
int main(){
    Rectangle R1;
    R1.calcArea();
    R1.displayArea();
    
    // Implicit Call 
    Rectangle R2(2,3);
    R2.calcArea();
    R2.displayArea();
    
    // Explicit Call 
    Rectangle R3 = Rectangle(5);
    R3.calcArea();
    R3.displayArea();
    return 0;
}