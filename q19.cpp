//wap to use constant data members
#include<iostream>
#include<string.h>
using namespace std;
class Student{
  private :
  const long roll;
  char name[50];
  public :
  Student(long r,char n[50]):roll(r){
    strcpy(name,n);
  }
  void displayData(){
    cout << "name of student : "<<name<<endl;
    cout << "roll of student : "<<roll<<endl;
  }
};
int main(){
  Student st1(2414342,"rashid");
  st1.displayData();
  Student st2(24141134,"raju");
  st2.displayData();
  return 0;
}
