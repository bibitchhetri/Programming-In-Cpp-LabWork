#include <iostream>
using namespace std;

class Area{
    int len, br;

public:
    void setData(int len, int br);
    int getArea();
};
void Area ::setData(int len, int br){
    this->len = len;
    this->br = br;
}
int Area ::getArea(){
    return len * br;
}
int main(){
    int length, breadth;
    Area rectangle;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter breadth: ";
    cin >> breadth;
    rectangle.setData(length, breadth);
    cout << "The area of Rectangle is: " << rectangle.getArea() << endl;
    return 0;
}