#include <iostream>
using namespace std;

class sample{
    int n1, n2;

public:
    void setNum(int n1, int n2){
        this->n1 = n1;
        this->n2 = n2;
    }
    friend int displayMean(sample);
};
int displayMean(sample M1){
    int mean = (M1.n1 + M1.n2) / 2;
    return mean;
}
int main(){
    int num1, num2;
    sample M1;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;
    M1.setNum(num1, num2);
    cout << "The required Mean is: " << displayMean(M1) << endl;
    return 0;
}