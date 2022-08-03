#include<iostream>
using namespace std;
class Math {
    static int x;
    static int y;
    public:
    static void display(){ //static member function
        cout<<"X : "<<x<<endl<<"Y : "<<y<<endl;
    }
};
int Math::x = 10;
int Math::y = 20;
int main(){
    Math M1;
    cout<<"Call from object "<<endl;
    M1.display();
    cout<<"Call from Class "<<endl;
    Math::display();
    return 0;
}