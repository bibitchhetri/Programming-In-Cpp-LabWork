#include<iostream>
#include<string>
using namespace std;

class Mountain {
    public:
    string name, location;
    int height;
    Mountain(){}
    Mountain(string name, string location, int height){
        this->name = name;
        this->location = location;
        this->height = height;
    }
    void highMountain(){
        cout<<"Name of Mountain: "<<name<<endl;
        cout<<"Location: "<<location<<endl;
        cout<<"Height: "<<height<<endl;
    }
    Mountain compareHeight(Mountain M1, Mountain M2){
        Mountain temp;
        if(M1.height>M2.height){
            temp.height = M1.height;
        }
        else{
            temp.height = M2.height;
        }
        return temp;
    }
};
int main(){
    Mountain M1("Everest","Solukhumbu",8848), M2("Machhapuchre","Kaski",6993);
    Mountain M3;
    M3 = M3.compareHeight(M1,M2);
    cout<<"Greatest Mountain: "<<endl;
    if(M3.height == M1.height){
        M1.highMountain();
    }
    else{
        M2.highMountain();
    }
    return 0;
}