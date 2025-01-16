#include <iostream>
using namespace std;
class passanger_detail{
    
    public:
    string name;
    int age;
    string flight_no;
    string dept_time;
    string source;
};
    
int main()
{
    int a;
    cout<<"Enter the no. of passenger"<<endl;
    cin>>a;
    passanger_detail pd[a];
    for(int i=0;i<a;i++){
        cout<<"Enter name of the passanger"<<endl;
        cin>>pd[i].name;
        cout<<"Enter age of the passanger"<<endl;
        cin>>pd[i].age;
        cout<<"Enter Flight no of the passenger"<<endl;
        cin>>pd[i].flight_no;
        cout<<"Enter Departure time of the passanger"<<endl;
        cin>>pd[i].dept_time;
        cout<<"Enter passanger source locaction"<<endl;
        cin>>pd[i].source;
    }
    for(int i=0;i<a;i++){
        cout<<"Name of the passanger is:- "<<pd[i].name<<endl;
        cout<<"Age of the passanger is:- "<<pd[i].age<<endl;
        cout<<"Flight no of the passenger is:- "<<pd[i].flight_no<<endl;
        cout<<"Departure time of the passanger is:- "<<pd[i].dept_time<<endl;
        cout<<"Passanger source locaction is:- "<<pd[i].source<<endl;
    }

    return 0;
}