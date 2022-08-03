#include<iostream>
using namespace std;
class Math {
    int num1, num2;
    public:
    Math(int n1, int n2){
        num1 = n1;
        num2 = n2;
    }
    friend void add(Math);
    
};

void add(Math M1){
    int sum = M1.num1 + M1.num2;
    cout<<"The sum is : "<<sum<<endl;
}
int main(){
    Math M1(10,20);
    add(M1);
    return 0;
}