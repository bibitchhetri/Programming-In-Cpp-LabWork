#include<iostream>
using namespace std;
class AddAmount {
    float amount, addAmt;
    public:
    AddAmount(){
        amount = 50;
        addAmt = 0;
    }
    AddAmount(float amt){
        addAmt = amt;
    }
    void calcAmount(){
        cout<<"Initial Amount: "<<amount<<endl; 
        amount = amount + addAmt;
    }
    void display(){
        cout<<"Final Amount: "<<amount<<endl;
    }
};
int main(){
    int amt;
    cout<<"Enter amount to be added: ";
    cin>>amt;
    AddAmount A1;
    A1.calcAmount();
    A1.display();

    AddAmount A2(amt);
    A2.calcAmount();
    A2.display();
    return 0;
}