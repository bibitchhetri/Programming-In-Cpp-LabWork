#include<iostream>
using namespace std;
class  Student{
    protected:
    int roll_no;
    public:
    void setRoll(int r){
        roll_no = r;
    }
    void getRoll(){
        cout<<"Roll no: "<<roll_no<<endl;
    }
};
class  Test : virtual public Student{
    protected:
    float math,science;
    public:
    void setMarks(float m, float s){
        math = m;
        science = s;
    }
    void getMarks(){
        cout<<"Marks in "<<endl
        <<"Math : "<<math<<endl
        <<"Science: "<<science<<endl;
    }
};
class  Sport : virtual public Student{
    protected:
    float score;
    public:
    void setScore(float sc){
        score = sc;
    }
    void getScore(){
        cout<<"Score: "<<score<<endl;
    }
};
class  Result : public Test, public Sport{
    int total;
    public:
    void display(){
        total = math + science + score;
        getRoll();
        getMarks();
        getScore();
        cout<<"Total Marks: "<<total<<endl;
    }
};

int main(){
    Result Bibit;
    Bibit.setRoll(9);
    Bibit.setMarks(65.5,98.5);
    Bibit.setScore(50.5);
    Bibit.display();
    return 0;
}