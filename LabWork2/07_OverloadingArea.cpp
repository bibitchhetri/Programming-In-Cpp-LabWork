#include<iostream>
using namespace std;
#define PI 3.14
int area(int l){
    return l*l;
}

int area(int l, int b){
    return l*b;
}

float area(float rad){
    return PI * rad * rad;
}

int main(){
    int len , br;
    float rad;
    cout<<"For the area of Square \n Enter Length: ";
    cin>>len;
    cout<<"Area of Square is: "<<area(len)<<endl;
    cout<<"\nFor the area of Rectangle \n Enter Length and Breadth: ";
    cin>>len>>br;
    cout<<"Area of Rectangle is: "<<area(len,br)<<endl;
    cout<<"\nFor the are of Circle \n Enter Radius: ";
    cin>>rad;
    cout<<"Area of Circle is: "<<area(rad)<<endl;
    return 0;
}