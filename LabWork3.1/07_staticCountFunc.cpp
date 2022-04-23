#include <iostream>
using namespace std;
 
class item{
    int itemNumber; 
    static int count;
     
public:
     
    void getData(){
        cout<<"Enter item number: ";
        cin>>itemNumber;
        cout<<"Item No: "<<itemNumber<<endl;
        count++;
    }
     
    void displayCount(){
        cout<<"count = "<<count<<endl;
    }
     
};
 
int item :: count;
 
int main(){
    int i = 0;
    item obj[i];
     
    cout<<"Initial value of count" <<endl;
    obj[0].displayCount();
    
    for (i = 0; i < 3; i++)
    {
    obj[i].getData();
    }
    
    cout<<"Value of count after getData() function is called by different objects"<<endl;
    obj[i].displayCount();// i.e obj[2] -> from loop
     
 
    return 0;
}