#include<iostream>
using namespace std;

template<class T>

class  Add {
    T a;
    T b;
    public:
    Add(T n1, T n2){
        a = n1;
        b = n2;
    }
    void display(){
        cout<<a<<" "<<b<<endl;
    }
};
int main(){
    Add<int> A1(10,20);
    A1.display();
    return 0;
}