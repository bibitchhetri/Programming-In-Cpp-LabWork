#include <iostream>
using namespace std;
class second;
class first{
    int num1, num2;

public:
    friend void swapUp(first, second);
    void setNum(){
        cout << "Enter Two Numbers: " << endl;
        cin >> num1 >> num2;
    }
    void displayNum(){
        cout << "num1 = " << num1 << "\tnum2 = " << num2 << endl;
    }
};
class second{
    int val1, val2;

public:
    friend void swapUp(first, second);
    void setVal(){
        cout << "Enter Two Values: " << endl;
        cin >> val1 >> val2;
    }
    void displayVal(){
        cout << "val1 = " << val1 << "\tval2 = " << val2 << endl;
    }
};
void swapUp(first N1, second V1){
    int temp1 = N1.num1, temp2 = N1.num2;
    N1.num1 = V1.val1;
    N1.num2 = V1.val2;
    V1.val1 = temp1;
    V1.val2 = temp2;
    cout << "num1 = " << N1.num1 << "\tnum2 = " << N1.num2 << endl;
    cout << "val1 = " << V1.val1 << "\tval1 = " << V1.val2 << endl;
}

int main(){
    first N1;
    second V1;
    N1.setNum();
    V1.setVal();
    cout << "Before Swaping" << endl;
    N1.displayNum();
    V1.displayVal();
    cout << "After Swaping" << endl;
    swapUp(N1, V1);
    return 0;
}