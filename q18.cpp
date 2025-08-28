#include<iostream>
#include<string>
using namespace std;
class student {
private :
string name;
long roll;
static int stdCount;
bool hasPassedMst;
public :
student(string n,long r,bool p){
  name=n;
  roll=r;
  hasPassedMst=p;
  stdCount+=1;
}
void displayData(){
  cout << "{"<<endl;
  cout << "student name : "<<name<<endl;
  cout << "student roll : "<<roll<<endl;
 if(hasPassedMst){
   cout << "student has passed Mst"<<endl;
 }else{
  cout << "student has not passed Mst"<<endl;
 }
 cout <<"}"<<endl;
}
static void studentCount(){
  cout << "no of students are :"<<stdCount<<endl;
}
};
int student ::stdCount;
int main(){
  student st1("rashid ekbal",241117,true);
  student st2("raju khan",2414584,false);
  st1.displayData();
  st2.displayData();
  student::studentCount();
  return 0;
}
