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
};
int main(){
    Number N1 = 5;
    N1.print();
    return 0;
}