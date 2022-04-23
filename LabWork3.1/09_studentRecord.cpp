#include<iostream>
#include<string>
using namespace std;
class student {
    string sname;
    float Marks_array[5], total, Tmax, avg;
    public:
    void assign(){
        cout<<"Enter Student info: "<<endl;
        cout<<endl<<"Enter Name: ";
        getline(cin,sname);
        cout<<"Enter Marks in 5 Subjects: ";
        for (int i = 0; i < 5; i++){
            cin>>Marks_array[i];
        }
        cout<<"Enter Maximum Marks: ";
        cin>>Tmax;
        //compute(); //to avoid calling from main we can include compute() function here
    }
    void compute(){
        for (int i = 0; i < 5; i++)
        {
            total = total + Marks_array[i];
        }
        avg = (total/5);
    }
    void display(){
        cout<<"Name: "<<sname<<endl;
        cout<<"Marks Obtained in each subject: ";
        for (int i = 0; i < 5; i++)
        {
            cout<<Marks_array[i]<<endl;
        }
        cout<<"Total Marks: "<<Tmax<<endl;
        cout<<"Total Marks Obtained: "<<total<<endl;
        cout<<"Average: "<<avg<<endl;
    }
};
int main(){
    student s1;
    s1.assign();
    s1.compute();
    s1.display();
    return 0;
}