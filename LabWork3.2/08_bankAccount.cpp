#include<iostream>
#include<string>
using namespace std;

class bankAccount{
    private:
    string name, accounType;
    long long int accountNum;
    long double balance;
    public:
    void assignData(){
        cout<<"Enter Name: ";
        getline(cin,name);
        cout<<"Enter Account Number: ";
        cin>>accountNum;
        cout<<"Enter Account Type: ";
        cin>>accounType;
        cout<<"Enter Amount: ";
        cin>>balance;
    }
    void deposit(){
        float temp;
        cout<<"Enter the amount you want to deposit: ";
        cin>>temp;
        balance = balance + temp;
        cout<<"Current Balance after Deposit: "<<balance<<endl;
    }
    void checkWithdraw(){
        float withdrawAmout;
        char check;
        cout<<"Available Balance: "<<balance<<endl;
        cout<<"Enter the amount you want to Withdraw: ";
        cin>>withdrawAmout;
        balance = balance - withdrawAmout;
        cout<<"Current Balance after Withdrawl: "<<balance<<endl;
    }
    void displayNameBalance(){
        cout<<"Name: "<<name<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};

int main(){
    char check;
    bankAccount Bibit;
    Bibit.assignData();
    cout<<"Do you want to Deposit?(Y/N): ";
    cin>>check;
        if (check == 'Y')
            Bibit.deposit();
        else
            return 0;
    cout<<"Do you want to WithDraw?(Y/N): ";
    cin>>check;
        if (check == 'Y')
            Bibit.checkWithdraw();
        else
            return 0;;
    cout<<"Do you want to Check Your Account Balance?(Y/N): ";
    cin>>check;
        if (check == 'Y')
            Bibit.displayNameBalance();
        else
            return 0;;
    return 0;
}