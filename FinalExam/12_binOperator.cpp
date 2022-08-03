#include<iostream>
using namespace std;
class Integer {
    int count;
    public:
    Integer(){
        count = 0;
    }
    Integer(int n){
        count = n;
    }
    Integer operator ++(){
        Integer temp;
        temp.count = ++count;
        return temp;
    }
    void display(){
        cout<<"temp = "<<count<<endl;
    }
};
int main(){
    Integer i1(3);
    cout<<"Before increment : ";
    i1.display();
    ++i1;
    cout<<"After increment : ";
    i1.display();
    return 0;
}