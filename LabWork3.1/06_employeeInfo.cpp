#include<iostream>
#include<string>
using namespace std;
class employee {
    string name, address;
    double salary, tax, netSalary;
    void calcNetSal(){
        netSalary = salary -  (salary*(tax/100));
    }
    public:
    void input(){
        cout<<"Enter Info: "<<endl;
        cout<<"Enter Name: ";
        getline(cin,name);
        cout<<endl<<"Enter Address: ";
        getline(cin,address);
        cout<<endl<<"Enter Salary: ";
        cin>>salary;
        cout<<endl<<"Enter Tax(%): ";
        cin>>tax;
        calcNetSal();
        cout<<endl;
    }
    void output(){
        cout<<"----------------------------"<<endl;
        cout<<"Display Info: "<<endl;
        cout<<endl<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"Tax: "<<tax<<endl;
        cout<<"Net-Salary: "<<netSalary<<endl;
    }

};
int main(){
    employee e1;
    e1.input();
    e1.output();
    return 0;
}