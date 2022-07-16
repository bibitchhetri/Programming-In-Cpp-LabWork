#include<iostream>
using namespace std;
class Room {
    protected:
    int length, breadth;
    public:
    int area(){
        return length*breadth;
    }
};
class BedRoom: public Room{
    int height;
    public:
    void setData(int l, int b, int h = 0){
        length = l;
        breadth = b;
        height = h;
    }
    int volume(){
        return length*breadth*height;
    }
};
int main(){
    BedRoom A1, V1;
    int l,b,h;
    cout<<"Enter Length, Breadth and Height: "<<endl;
    cin>>l>>b>>h;
    A1.setData(l,b);
    cout<<"The Area of the room is: "<<A1.area()<<endl;
    V1.setData(l,b,h);
    cout<<"The Volume of the room is: "<<V1.volume()<<endl;
    return 0;
}   