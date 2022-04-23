#include<iostream>
#include<string>
using namespace std;
class batsman {
    string name;
    int runsMade, noOfFours, noOfSixes;
    public: 
    void setData(){
        cout<<"Enter Name: ";
        cin>>name;
        cout<<endl<<"No. of Fours: ";
        cin>>noOfFours;
        cout<<endl<<"No. of Sixes: ";
        cin>>noOfSixes;
        cout<<endl<<"Total Runs: ";
        cin>>runsMade;
        cout<<endl;
    }
    void displayInfo(){
        cout<<"--------------------------"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"No. of Fours: "<<noOfFours<<endl;
        cout<<"No. of Sixes: "<<noOfSixes<<endl;
        cout<<"Total Runs: "<<runsMade<<endl;
        cout<<"--------------------------"<<endl;
    }
};
int main(){
    int i;
    batsman B[4];
    cout<<"Enter the info of Players: "<<endl;
    for ( i = 0; i <= 5; i++)
    {
        B[i].setData();
    }
    cout<<"--------------------------"<<endl;
    for ( i = 0; i <= 5; i++)
    {
        B[i].displayInfo();
    }
    return 0;
}