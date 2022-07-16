#include<iostream>
#include<string>
using namespace std;
class Employee {
    protected:
    string ename;
    int eid;
    float salary;
    public:
    void setEmpInfo(string ename, int eid, float salary){
        this->ename = ename;
        this->eid = eid;
        this->salary = salary;
    }
    void getEmpInfo(){
        cout<<"Name of Employee: "<<ename<<endl;
        cout<<"Id: "<<eid<<endl;
        cout<<"Salary: "<<salary<<"$"<<endl;
    }
};

class Company : public Employee{
    protected:
    string cName, location, employee;
    public:
    void setCompInfo(string cName, string location, string employee){
        this->cName = cName;
        this->location = location;
        this->employee = employee;
    }
    void getCompInfo(){
        cout<<"Company Name: "<<cName<<endl;
        cout<<"Location: "<<location<<endl;
        // cout<<"Employee Name: "<<employee<<endl;
    }
    void display(){
        if(employee == ename){
            getCompInfo();
            getEmpInfo();
        }
        else {
            cout<<"Employee not found!"<<endl;
        }
    }
    
};
int main(){
    Company E1;
    string cName, location, employee, ename;
    int eid;
    float salary;
    cout<<"Enter Name of Company: ";
    getline(cin,cName);
    cout<<"Enter location: ";
    getline(cin,location);
    cout<<"Enter Name of Employee: ";
    getline(cin,employee);
    E1.setCompInfo(cName,location,employee);
    cout<<"Enter Employee details to be Displayed"<<endl;
    cout<<"Employee name: ";
    getline(cin,ename);
    cout<<"Employee ID: ";
    cin>>eid;
    cout<<"Salary: ";
    cin>>salary;
    E1.setEmpInfo(ename,eid,salary);
    cout<<"-------------------------------------------"<<endl;
    E1.display();
    cout<<"-------------------------------------------"<<endl;
    return 0;
}