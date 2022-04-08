#include <iostream>
using namespace std;
#define PI 3.14

class Area{
    int rad;

public:
    void setData(int rad);
    float getArea();
};
void Area ::setData(int rad){
    this->rad = rad;
}
float Area ::getArea(){
    return PI*rad*rad;
}
int main(){
    int radius;
    Area circle;
    cout << "Enter Radius of a Circle: ";
    cin >> radius;
    circle.setData(radius);
    cout << "The area of Rectangle is: " << circle.getArea() << endl;
    return 0;
}