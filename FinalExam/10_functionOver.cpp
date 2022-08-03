#include<iostream>
using namespace std;
class Math {
    int a, b, c;
    public:
    void Sum(int n1, int n2){
        a = n1; b = n2;
        cout<<"The sum is: "<<a+b<<endl;
    }
    void Sum(int n1, int n2, int n3){
        a = n1; b = n2; c = n3;
        cout<<"The sum is: "<<a+b+c<<endl;
    }
};
int main(){
    Math M1;
    M1.Sum(10,20);
    M1.Sum(10,20,30);
    
    return 0;
}