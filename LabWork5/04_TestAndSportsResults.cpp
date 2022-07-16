#include<iostream>
using namespace std;

class  Student{
    protected:
    int roll_no;
    public:
    void setRoll(int roll_no){
        this->roll_no = roll_no;
    }
    void getRoll(){
        cout<<"Roll no: "<<roll_no<<endl;
    }
};

class  Test: public Student{
    protected:
    float sub1, sub2;
    public:
    void setMarks(float sub1, float sub2){
        this->sub1 = sub1;
        this->sub2 = sub2;
    }
    void getMarks(){
        cout<<"Marks in first subject: "<<sub1<<endl;
        cout<<"Marks in second subject: "<<sub2<<endl;
        cout<<"Total Marks: "<<sub1+sub2<<endl;
    }
};

class  Sport{
    protected:
    float score;
    public:
    void setScore(float score){
        this->score = score;
    }
    void getScore(){
        cout<<"Total Score in Sports: "<<score<<endl;
    }
};

class  Result: public Test, public Sport{
    public:
    void display(){
    cout<<"-------------------------------------------"<<endl;
        getRoll();
        getScore();
        getMarks();
    cout<<"-------------------------------------------"<<endl;
    }
};
int main(){
    Result S1;
    int roll;
    float sub1, sub2, score;
    cout<<"Enter Roll no: ";
    cin>>roll;
    S1.setRoll(roll);
    cout<<"Enter marks obtained in two subjects: ";
    cin>>sub1>>sub2;
    S1.setMarks(sub1,sub2);
    cout<<"Enter Sports Score: ";
    cin>>score;
    S1.setScore(score);
    S1.display();
    return 0;
}