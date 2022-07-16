#include<iostream>
using namespace std;
class  Student{
    protected:
    int roll;
    public:
    void setRoll(int roll){
        this->roll = roll;
    }
};
class  Test: public Student{
    protected:
    float sub1, sub2;
    public:
    void setData(float sub1, float sub2){
        this->sub1 = sub1;
        this->sub2 = sub2;
    }
};
class  Result: public Test{
    public:
    void display(){
        cout<<"-------------------------------------------"<<endl;
        cout<<"Roll no: "<<roll<<endl;
        cout<<"Total marks obtained: "<<sub1+sub2<<endl;
        cout<<"-------------------------------------------"<<endl;
    }
};
int main(){
    Result R1;
    int roll;
    float sub1, sub2;
    cout<<"Enter Roll no: ";
    cin>>roll;
    R1.setRoll(roll);
    cout<<"Enter marks obtained in two subjects: ";
    cin>>sub1>>sub2;
    R1.setData(sub1,sub2);
    R1.display();
    return 0;
}