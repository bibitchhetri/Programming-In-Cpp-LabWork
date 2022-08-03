#include<iostream>
using namespace std;

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
    int getMeter(){
        return meter;
    }
    int getCentimeter(){
        return centimeter;
    }
};

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
        Distance(dist d){ 
        int me = d.getMeter();
        int ce = d.getCentimeter();
        feet = me * 3.3;
        inch = ce * 0.4;
        feet = feet + inch / 12;
        inch = inch % 12;
    }
};


int main()
{
    dist d2(4, 50);
    Distance d1(d2);
    d1.display();
}