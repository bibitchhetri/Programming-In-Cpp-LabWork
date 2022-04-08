#include <iostream>
using namespace std;

// same function with two arguement
int multiply(int n1, int n2){
    return n1 * n2;
}

// same function with no arguement
void multiply(){
    int n1, n2;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    cout << n1 << " X " << n2 << " : " << n1 * n2 << endl;
}

// same function with three arguements
int multiply(int n1, int n2, int n3){
    return n1 * n2 * n3;
}

int main(){
    int num1, num2, num3;
    char choice;
    cout << "Enter First number: ";
    cin >> num1;
    cout << "Enter Second number: ";
    cin >> num2;
    cout << "Enter Third number: ";
    cin >> num3;
    cout << num1 << " X " << num2 << " = " << multiply(num1, num2) << endl;
    cout << num1 << " X " << num2 << " X " << num3 << " = " << multiply(num1, num2, num3) << endl;
    cout << "Do you want to perform random Multiplication? [Y/N]" << endl;
    cin >> choice;
    if (choice == 'Y'){
        multiply();
    }
    else{
        cout << "Program Exited!";
    }
    return 0;
}