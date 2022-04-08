#include <iostream>
using namespace std;

inline int largest(int n1, int n2, int n3){
    if (n1 > n2 && n1 > n3)
        return n1; // cout<<n1<<" is the largest"<<endl;
    else if (n2 > n1 && n2 > n3)
        return n2; // cout<<n2<<" is the largest"<<endl;
    else
        return n3; // cout<<n3<<" is the largest"<<endl;
}

int main(){
    int num1, num2, num3;
    cout << "Enter Three Numbers: ";
    cin >> num1 >> num2 >> num3;
    // largest(num1, num2, num3)
    cout << largest(num1, num2, num3) << " is the Largest Number" << endl;
    return 0;
}