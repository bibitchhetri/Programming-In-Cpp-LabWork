#include <iostream>
using namespace std;
class XYZ; // forward declaration
class ABC{
    int first_Num;

public:
    friend void max(ABC, XYZ); // friend function
    void setNum(){
        this->first_Num = first_Num;
        cout << "Enter First Number: ";
        cin >> first_Num;
    }
};
class XYZ
{
    int second_Num;

public:
    friend void max(ABC, XYZ); // friend function
    void setNum(){
        this->second_Num = second_Num;
        cout << "Enter Second Number: ";
        cin >> second_Num;
    }
};
void max(ABC n1, XYZ n2)
{
    if (n1.first_Num > n2.second_Num){
        cout << "First Number i.e " << n1.first_Num << " is the greatest" << endl;
    }
    else if (n1.first_Num < n2.second_Num){
        cout << "Second Number i.e " << n2.second_Num << " is the greatest" << endl;
    }
    else{
        cout << "Both are equal" << endl;
    }
}

int main()
{
    ABC n1;
    XYZ n2;
    n1.setNum();
    n2.setNum();
    max(n1, n2);
    return 0;
}