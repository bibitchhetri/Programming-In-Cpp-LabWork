#include<iostream>
using namespace std;
class Number {
    int n;
    public:
    Number(int n){
        this->n = n;
    }
    void print(){
        cout<<"Value of 'n' is : "<<n<<endl;
    }
    operator int(){
        return n;
    }
};
int main(){
    Number N1 = 5;
    N1.print();
    Number N2(20);
    int num1 = N2;
    cout<<"Value of num1 is : "<<num1<<endl;
    return 0;
}