#include<iostream>
using namespace std;

inline float convert(float Pnd){
    return Pnd * 0.453592;
}

int main(){
    int pound;
    cout<<"Enter Weight in Pound: ";
    cin>>pound;
    cout<<"The Weight in Kilogram(K.G) is: "<<convert(pound)<<endl;
    return 0;
}