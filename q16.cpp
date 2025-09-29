//WAP to create class having member functions definition inside class.
#include<iostream>
#include<string>
using namespace std;

class student{
  private :
  string name;
  string branch;
  int roll;
   public :
   student(string n,string br,int rol){
    name=n;
    branch=br;
    roll=rol;
   }
   void displayData(){
    cout << "name : " << name <<endl;
    cout  << "branch : " << branch << endl;
    cout <<"roll : "<<roll<<endl;
   }
};

int main(){
  student st1("rashid ","btech(C.S.E)",2414342);
  st1.displayData();
  return 0;
}
