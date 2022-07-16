#include<iostream>
#include<string>
using namespace std;
class Student {
    string name;
    public:
    Student(){  // default constructor
        name = "Unknown";
    }
    Student(string n1){  // parameterized constructor
        name = n1;
    }
    void display(){
        cout<<"Name of Student: "<<name<<endl;
    }
};
int main(){
    Student s1;
    s1.display(); // without arguement
    Student s2("Bibit"); // with arguement
    s2.display();
    return 0;
}