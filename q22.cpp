//WAP to implement inheritance 
#include<iostream>
#include<string.h>
using namespace std;
class Role{
protected :
string role;
long salary;
public :
Role(){};
};
class Employee:private Role{
    private :
    string name;
    long id;
    public : 
    Employee(){
        name="null";
        id=-1;
        role="null";
        salary=0;
    };
    Employee(string n,string r,long i,long s)
    {
        name=n;
        role=r;
        id=i;
        salary=s;
        cout << "new employee added"<<endl;
    }
    void displayData(){
        cout << "employee name : "<<name<<endl;
        cout << "employee id : "<<id<<endl;
        cout << "employee role : "<<role<<endl;
        cout << "employee salary : "<<salary<<endl;
    }
};
int main(){
    Employee emp1("rashid","tech lead", 101,45000);
    emp1.displayData();

    return 0;
}