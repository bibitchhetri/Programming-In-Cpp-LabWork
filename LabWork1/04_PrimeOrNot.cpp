#include<iostream>
using namespace std;

class NumberTypes{
    int num;
    public:
    void setNum();
    void display();
};

void NumberTypes :: setNum(){
    cout<<"Enter any Integer: ";
    cin>>num;
}

void NumberTypes :: display(){
    int temp = 0;
    for (int i = 1; i <= num; i++){
        if (num%i == 0)
        {
            temp++;
        }   
    }
    if (temp == 2){
        cout<<num<<" is a Prime Number"<<endl;
    }
    else{
        cout<<num<<" is not a Prime Number"<<endl;
    }   
}

int main(){
    NumberTypes Prime;
    Prime.setNum();
    Prime.display();
    return 0;
}