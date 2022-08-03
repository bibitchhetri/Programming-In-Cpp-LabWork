#include<iostream>
using namespace std;
class Math {
    int num1, num2;
    public:
    Math(int n, int m){
        num1 = n;
        num2 = m;
    }
    friend class Add;
};
class Add {
    int sum;
    public:
    void display(Math M1){
        sum = M1.num1 + M1.num2;
        cout<<"The sum is : "<<sum<<endl;
    }
};
int main(){
    Math M1(10,20);
    Add A1;
    A1.display(M1);
    return 0;
}