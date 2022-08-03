#include<iostream>
using namespace std;
class Math {
    static int count;
    public:
    void display(){
        cout<<"Value of count is : "<<count<<endl;
        ++count;
    }
};
int Math::count = 0;
int main(){
    Math M1, M2;
    M1.display();
    M2.display();
    M2.display();
    M2.display();
    return 0;
}