#include <iostream>
using namespace std;

int power(int n, int m = 2){
    // Alternative Code
    //  int temp = n;
    //  for (int i = 2; i <= m; i++)
    //  {
    //      n *= temp;
    //  }
    int temp = 1;
    while (m != 0)
    {
        temp *= n;
        --m;
    }
    return temp;
}
int main(){
    int n, m;
    cout << "Enter Coefficient i.e N: ";
    cin >> n;
    cout << "Enter Power to be raised i.e M: ";
    cin >> m;
    //-->>for defined argument
    cout << "The Value of N^M when two Arguments are passed is: " << power(n, m) << endl;
    //-->>For default argument
    cout << "The Value of N^M when single Argument is passed is: " << power(n) << endl;
    return 0;
}