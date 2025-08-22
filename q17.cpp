//WAP to create a class having member functions definition outside the class.
#include<iostream>
#include<string>
using namespace std;
 class student{

  private :
  string name;
  string branch;
  int roll;
  public:
  student(string n ,string br,int rollNo);;
  void displayData();
 };



void student :: displayData(){
  cout << "name : " << name <<endl;
    cout  << "branch : " << branch << endl;
    cout <<"roll : "<<roll<<endl;
}

student::student(string n,string br,int rollNo){
  name=n;
  branch=br;
  roll=rollNo;
}
int main(){
student st1("rashid ekbal","btech(C.S.E)",241117);
st1.displayData();
  return 0;
}