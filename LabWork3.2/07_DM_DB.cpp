#include<iostream>
using namespace std;
class DB;
class DM{
    float meter, centi;
    public:
    void setDistance(){
        cout<<"Enter distance in Meter: "<<endl;
        cin>>meter;
        cout<<"Enter distance in centimeter: "<<endl;
        cin>>centi;
    }
    friend DM addDistance(DM Val1, DB Val3);
    void display(){
        cout<<"The sum in meters is: "<<meter<<endl;
        cout<<"The sum in centimeters is: "<<centi<<endl;
    }
};
class DB{
    float feet, inch;
    public:
    void setDistance(){
        cout<<"Enter distance in Feet: "<<endl;
        cin>>feet;
        cout<<"Enter distance in Inches: "<<endl;
        cin>>inch;
    }
    friend DM addDistance(DM Val1, DB Val3);
};

DM addDistance(DM Val1, DB Val3){
    DM temp; //temporary object
    temp.meter = Val1.meter + Val1.centi*0.01 + Val3.feet*0.3048 + Val3.inch*0.0254;
    temp.centi = Val1.centi + Val1.meter*100 + Val3.feet*30.48 + Val3.inch*2.54;
    return temp;
}

int main(){
    DM Val1, Val2;
    DB Val3;
    Val1.setDistance();
    Val3.setDistance();
    Val2 = addDistance(Val1, Val3);
    Val2.display();
    return 0;
}