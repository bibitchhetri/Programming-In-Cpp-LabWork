#include <iostream>
using namespace std;

class Maths{
    int num1, num2;

public:
    void setNum(int n1, int n2);
    int getSum();
};

void Maths ::setNum(int num1, int num2){
    this->num1 = num1;
    this->num2 = num2;
}

int Maths ::getSum(){
    return num1 + num2;
}
int main(){
    int n1, n2;
    Maths A1;
    cout << "Enter First Number: ";
    cin >> n1;
    cout << "Enter Second Number: ";
    cin >> n2;
    A1.setNum(n1, n2);
    cout << "The Sum of Two Number is: " << A1.getSum() << endl;
    return 0;
}