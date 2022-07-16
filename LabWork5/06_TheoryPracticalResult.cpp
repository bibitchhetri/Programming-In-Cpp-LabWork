#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_no;

public:
    void setRoll(int roll)
    {
        roll_no = roll;
    }
    void getRoll()
    {
        cout << "Roll no: " << roll_no << endl;
    }
};

class Theroy : virtual public Student
{
protected:
    float math, science;

public:
    void setThMarks(float math, float science)
    {
        this->math = math;
        this->science = science;
    }
    void getThMarks()
    {
        cout << "Marks in Math: " << math << endl;
        cout << "Marks in Science: " << science << endl;
    }
};

class Practical : virtual public Student
{
protected:
    float mathPr, sciencePr;

public:
    void setPrMarks(float mathPr, float sciencePr)
    {
        this->mathPr = mathPr;
        this->sciencePr = sciencePr;
    }
    void getPrMarks()
    {
        cout << "Practical marks in Math: " << mathPr << endl;
        cout << "Practical marks in Science: " << sciencePr << endl;
    }
};

class Result : public Theroy, public Practical
{
public:
    void getResult()
    {
        getRoll();
        getThMarks();
        getPrMarks();
        cout << "Total marks obtained: " << math + science + mathPr + sciencePr << endl;
    }
};

int main()
{
    Result R1;
    int roll, math, science, mathPr, sciencePr;
    cout << "Enter Roll no: ";
    cin >> roll;
    cout << "Enter marks in Math and Science: ";
    cin >> math >> science;
    cout << "Enter Practical marks in Math and Science: ";
    cin >> mathPr >> sciencePr;
    R1.setRoll(roll);
    R1.setThMarks(math, science);
    R1.setPrMarks(mathPr, sciencePr);
    cout << "------------------------------------------------------" << endl;
    R1.getResult();
    cout << "------------------------------------------------------" << endl;
    return 0;
}