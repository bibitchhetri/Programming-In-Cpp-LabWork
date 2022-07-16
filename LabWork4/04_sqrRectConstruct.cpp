#include<iostream>
using namespace std;
class Area {
    int length, breadth, area;
    public:
    void calcArea(int len, int br){
        area = len*br;
        cout<<"Area of Rectangle is: "<<area<<endl;
    }
    void calcArea(int len){
        area = len*len;
        cout<<"Area of Square is: "<<area<<endl;
    }
};
int main(){
    Area rectangle, square;
    rectangle.calcArea(2,4);
    square.calcArea(2);
    return 0;
}