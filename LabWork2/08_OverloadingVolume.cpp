#include <iostream>
using namespace std;
#define PI 3.14

// Cylinder
float volume(int r, int h){
    return PI * r * r * h;
}

// Cuboid
int volume(int l, int b, int h){
    return l * b * h;
}

// Cube
int volume(int l){
    return l * l * l;
}

int main(){
    int len, br, hgt, rad;
    cout << "For the volume of Cylinder \n Enter Radius and Height: ";
    cin >> rad >> hgt;
    cout << "Volume of Cylinder is: " << volume(rad, hgt) << endl;
    cout << "\nFor the volume of Cuboid \n Enter Length, Breadth, Height: ";
    cin >> len >> br >> hgt;
    cout << "Volume of Cuboid is: " << volume(len, br, hgt) << endl;
    cout << "\nFor the volume of Cube \n Enter Length: ";
    cin >> len;
    cout << "Volume of Cube is: " << volume(len) << endl;
    return 0;
}