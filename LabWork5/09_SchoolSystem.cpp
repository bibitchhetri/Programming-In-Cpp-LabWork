#include<iostream>
#include<string>
using namespace std;
class STAFF {
    protected:
    string Name, Address, Post;
    public:
    STAFF(){
        Name = "Unknown";
        Address = "Unknown";
        Post = "Unknown";
    }
    STAFF(string Name, string Address, string Post){
        this->Name = Name;
        this->Address = Address;
        this->Post = Post;
    }
    void getStaffInfo(){
        cout<<"Name: "<<Name<<endl;
        cout<<"Address: "<<Address<<endl;
        cout<<"Post: "<<Post<<endl;
    }
};

    class NON_TEACHING : public STAFF{
    protected:
    public:
    NON_TEACHING(){
        // Post = "Unknown";
    }
    NON_TEACHING(string Name, string Address, string Post):STAFF(Name,Address,Post){}
    void getNonTeachingInfo(){
        getStaffInfo();
    }
};

class TEACHING : virtual public STAFF {
    protected:
    string Dept;
    public:
    TEACHING(){
        Dept = "Unknown";
    }
    TEACHING(string Name, string Address, string Dept):STAFF(Name,Address,Dept){
        this->Dept = Dept;
        cout<<"Name: "<<Name<<endl;
        cout<<"Address: "<<Address<<endl;
        cout<<"Department: "<<Dept<<endl;
    }
    // void setTeachingInfo(string Post){
    //     this->Dept = Dept;
    // }
    void getTeachingInfo(){
        getStaffInfo();
        cout<<"Department: "<<Dept<<endl;
    }
};

class ADMIN : virtual public NON_TEACHING, public TEACHING {
    protected:
    int workingHrs;
    public:
    ADMIN(string Name, string Address, string Post):NON_TEACHING(Name, Address, Post){
        // cout<<"Name: "<<Name<<endl;
        // cout<<"Address: "<<Address<<endl;
        // cout<<"Post: "<<Dept<<endl;
    }
    void setWorkHr(int workingHrs){
        this->workingHrs = workingHrs;
    }
    void getWorkHr(){
        cout<<"Working Hour: "<<workingHrs<<endl;
    }
};
int main(){
    string Name, Address, Post, Dept;
    int workingHrs;
    cout<<"Enter Name: ";
    getline(cin,Name);
    cout<<"Enter Address: ";
    getline(cin,Address);
    cout<<"Enter Post: ";
    getline(cin,Post);
    cout<<"Enter Depatment: ";
    getline(cin,Dept);
    cout<<"Enter Working Hour: ";
    cin>>workingHrs;
    cout<<"------------------------------------------------"<<endl;
    cout<<"STAFF INFO"<<endl;
    STAFF S1(Name,Address,Post);
    S1.getStaffInfo();
    cout<<"------------------------------------------------"<<endl;
    cout<<"NON TEACHING INFO"<<endl;
    NON_TEACHING N1(Name,Address,Post);
    N1.getNonTeachingInfo();
    cout<<"------------------------------------------------"<<endl;
    cout<<"TEACHING INFO"<<endl;
    TEACHING T1(Name,Address,Dept);
    // T1.getTeachingInfo();
    cout<<"------------------------------------------------"<<endl;
    cout<<"ADMIN INFO"<<endl;
    ADMIN A1(Name,Address,Post);
    A1.setWorkHr(workingHrs);
    A1.getNonTeachingInfo();
    A1.getWorkHr();
    cout<<"------------------------------------------------"<<endl;
    return 0;
}