#include <iostream>
using namespace std;

class Size{
    int num1, num2;

public:
    void setNum();
    void getLarge();
};
void Size ::setNum(){
    cout << "Enter Two Numbers: ";
    cin >> num1 >> num2;
}
void Size ::getLarge(){
    if (num1 > num2)
    {
        cout << num1 << " is the greatest"<< endl;
    }
    else
    {
        cout << num2 << " is the Greatest"<< endl;
    }
}
int main(){
    Size S1;
    S1.setNum();
    S1.getLarge();
    return 0;
}