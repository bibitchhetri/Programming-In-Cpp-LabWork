#include<iostream>
using namespace std;
class employee {
    string name; //non static data member
    int id;
    public:
    static int count;
    void setData(){
        cout<<"Employee Info"<<endl;
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Id: ";
        cin>>id;
        count++;
    }
    static void displayCount(){ //static member function (it can only access static variable data)
        cout<<"Count = "<<count<<endl;
    }
};
int employee :: count = 0; //initializing static variable
int main(){
    employee e1, e2;
    cout<<"Initial value of static variable count is: "<<endl;
    
    e1.displayCount();
    e2.displayCount();

    e1.setData();
    e2.setData();

    cout<<"The value of static variable count after calling function setDAta() is: "<<endl;
    e1.displayCount();
    e2.displayCount();
    return 0;
}