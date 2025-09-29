//WAP to demonstrate the use of zero parameter and parameterized constructor
#include<iostream>
#include<string.h>
using namespace std;
class Student{
    private :
    string name;
    long roll;
    public  :
    Student():name("undefined"),roll(000000){}//empty constructor 
    Student(string n,long r){ //parameterized constructor
        name=n;
        roll=r;
    }
    Student(Student &st){ //parameterized copy constructor
        name=st.name;
        roll=st.roll;
    }
    void setData(string nm,long rl){
        name=nm;
        roll=rl;

    }
    void displayData()
{
    cout << "name : "<<name<<endl;
    cout << "roll : "<<roll<<endl;
}};
int main(){
    Student std1;
    Student std2("rashid",241117);
    Student std3(std2);
    std1.displayData();
    std2.displayData();
    std3.displayData();
    return 0;
}