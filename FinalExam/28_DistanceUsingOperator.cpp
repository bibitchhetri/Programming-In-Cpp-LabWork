#include<iostream>
using namespace std;

class Distance{
    int feet, inch;
public:
    Distance()
    {
        feet = inch = 0;
    }
    Distance(int f, int i)
    {
        feet = f;
        inch = i;
    }
    void display()
    {
        cout << feet <<" ft" <<endl<< inch <<" inch" << endl;
    }
};

class dist{
    int meter;
    int centimeter;
public: 
    dist(){
        meter = 0; 
        centimeter = 0;
        }
    dist(int m, int c)
    {
        meter = m;
        centimeter = c;
    }
    operator Distance(){ 
        Distance d;
        int f, i;
        f = meter * 3.3;
        i = centimeter * 0.4;
        f = f + i / 12;
        i = i % 12;
        return Distance(f, i);
    }
};

int main()
{
    dist d2(4, 50);
    Distance d1;
    d1 = d2;
    d1.display();
}