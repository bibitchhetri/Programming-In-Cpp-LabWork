#include <iostream>
using namespace std;

inline float convert(float F){
    return 5 * (F - 32) / 9;
}

int main(){
    float frnht;
    cout << "Enter Temp in Fahrenheit(F): ";
    cin >> frnht;
    cout << "Temp in Celsius(C) is: " << convert(frnht) << endl;
    return 0;
}