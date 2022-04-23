#include<iostream>
using namespace std;

class add {
    int feet, inches;
    public:
    void setData(){
        cout<<"Enter number of Feet: ";
        cin>>feet;
        cout<<"Enter number of Inches: ";
        cin>>inches;
    } 
    void sumData(add A1, add A2){
        feet = A1.feet + A2.feet;
        inches = A1.inches + A1.inches;
        feet = feet + inches/12;
        inches = inches%12;
    }
    void displayData(){
        cout<<"After Summation"<<endl;
        cout<<"Feet: "<<feet<<"\tInches: "<<inches<<endl;
    }
};

int main(){
    add A1, A2, A3;
    A1.setData();
    A2.setData();
    A3.sumData(A1, A2);
    A3.displayData();
    return 0;
}