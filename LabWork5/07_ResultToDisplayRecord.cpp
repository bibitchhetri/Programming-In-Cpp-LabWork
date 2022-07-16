#include<iostream>
#include<string>
using namespace std;
class Student {
    protected:
    string name;
    int roll;
    public:
    void setInfo(string name, int roll){
        this->name = name;
        this->roll = roll;
    }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no: "<<roll<<endl;
    }
};

class Marks {
    protected:
    float oop, pm, bc, acc, fin;
    public:
    void setMarks(float oop, float pm, float bc, float acc, float fin){
        this->oop = oop;
        this->pm = pm;
        this->bc = bc;
        this->acc = acc;
        this->fin = fin;
    }
    void getMarks(){
        cout<<"Marks in OOP: "<<oop<<endl;
        cout<<"Marks in pm: "<<pm<<endl;
        cout<<"Marks in bc: "<<bc<<endl;
        cout<<"Marks in acc: "<<acc<<endl;
        cout<<"Marks in fin: "<<fin<<endl;
    }
};

class Result : public Student, public Marks {
    float total, percentage;
    public:
    float getTotal(){
    total = oop + pm + bc + acc + fin;
    return total;
    }
    float getPercent(){
    // percentage = (total/500)*100;
    percentage = 0.2*total; //both are same
    return percentage;
    }
    void display(){
        getInfo();
        getMarks();
        cout<<"Total marks obtained: "<<getTotal()<<endl;
        cout<<"Total Percentage: "<<getPercent()<<endl;
    }
};

int main(){
    Result R1;
    string name;
    int roll;
    float oop, pm, bc, acc, fin;
    cout<<"Enter Name: ";
    getline(cin,name);
    cout<<"Enter Roll no: ";
    cin>>roll;
    cout<<"Enter marks in OOP: ";
    cin>>oop;
    cout<<"Enter marks in pm: ";
    cin>>pm;
    cout<<"Enter marks in bc: ";
    cin>>bc;
    cout<<"Enter marks in acc: ";
    cin>>acc;
    cout<<"Enter marks in fin: ";
    cin>>fin;
    R1.setInfo(name,roll);
    R1.setMarks(oop,pm,bc,acc,fin);
    cout<<"------------------------------"<<endl;
    R1.display();
    cout<<"------------------------------"<<endl;
    return 0;
}