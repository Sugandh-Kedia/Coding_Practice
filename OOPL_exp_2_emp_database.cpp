#include <iostream>
#include<string>
using namespace std;

class Employee{
public:
string emp_name;
string emp_id;
string emp_qualification;
string emp_address;
string emp_phone_no;
long int basic_salary;
long int total_salary;
    Employee(){                                                                     //Initializing and declearing Default Construtor
        cout<<"Enter Detail of Employee"<<endl;
        cout<<endl;
        cout<<"Name of the employee is: ";
        cin>>emp_name;
        cout<<"Id of the employee is:  ";
        cin>>emp_id;
        cout<<"Quallification of the employee is: ";
        cin>>emp_qualification;
        cout<<"Address of the employee is: ";
        cin>>emp_address;
        cout<<"Phone/Contact number of the employee is: ";
        cin>>emp_phone_no;
        cout<<"Enter Basic Salary: ";
        cin>>basic_salary;
        cout<<"-------------------------------------------------------------------------------------------------"<<endl;
    }
    Employee(string name,string id,string qualification,string address,string phone_no,long int b_salary)  //Parametized Construtor
    {           
        emp_name=name;
        emp_id=id;
        emp_qualification=qualification;
        emp_address=address;
        emp_phone_no=phone_no;
        basic_salary=b_salary;
    }
    Employee(Employee &e1){
        emp_name=e1.emp_name;
        emp_id=e1.emp_id;
        emp_qualification=e1.emp_qualification;
        emp_address=e1.emp_address;
        emp_phone_no=e1.emp_phone_no;
        basic_salary=e1.basic_salary;
        total_salary=e1.basic_salary;
    }
    void Calculate_salary(){
        total_salary=(1+0.1+0.9)*basic_salary;
    }
    void display(){
        cout<<"Name of the employee is: "<<emp_name<<endl;
        cout<<"Id of the employee is:  "<<emp_id<<endl;
        cout<<"Quallification of the employee is: "<<emp_qualification<<endl;
        cout<<"Address of the employee is: "<<emp_address<<endl;
        cout<<"Phone/Contact number of the employee is: "<<emp_phone_no<<endl;
        cout<<"Basic Salary is: "<<basic_salary<<endl;
        cout<<"Total Salary is: "<<total_salary<<endl;
    } 
    ~Employee(){
        cout<<"Destructor Called"<<endl;
    }  
};
int main(){
    Employee emp[2];
    Employee ext("Rahul","103","Engg","MP","9876543210",100000);
    cout<<"Prametric Constructor run succesfully"<<endl;
    ext.Calculate_salary();
    ext.display();
    cout<<"-------------------------------------------------------------------------------------------------"<<endl;
    Employee empcpy=ext;
    cout<<"Succesfully string had been copied"<<endl;
    empcpy.display();
    cout<<"-------------------------------------------------------------------------------------------------"<<endl;
    for(int i=0;i<2;i++){
        cout<<"Details of Employee "<<i+1<<endl;
        emp[i].Calculate_salary();
        emp[i].display();
        cout<<"-------------------------------------------------------------------------------------------------"<<endl;
    }
    return 0;
}
