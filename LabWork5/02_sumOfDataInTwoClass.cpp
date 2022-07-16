#include<iostream>
using namespace std;
class  class1{
    protected:
    int num1;
    public:
    void setNum1(int num1){
        this->num1 = num1;
    }
};
class  class2{
    protected:
    int num2;
    public:
    void setNum2(int num2){
        this->num2 = num2;
    }
};
class  class3: public class1, public class2{
    public:
    int sum(){
        return num1 + num2;
    }
};
int main(){
    class3 C3;
    int num1, num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    C3.setNum1(num1);
    C3.setNum2(num2);
    cout<<"The Sum is: "<<C3.sum()<<endl;
    return 0;
}