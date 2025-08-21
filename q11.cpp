//Q.11 WAP to implement String function’s
#include<iostream>
#include<string>
using namespace std;

int main(){
string name="rasid";
string surname="ekbal";
//length of string 
cout <<name <<" contains " << name.length() << " letters"<<endl;
// string concationation
string fullname=name+" "+surname;
cout << fullname<<endl;
//access char of string at specific index 
cout <<"char at index 0 in "<<name << " : "<< name.at(0)<<endl;
//substring of a given string
cout <<"substring form name : "<< name.substr(0,2) <<endl;
// inserting into a string 
name.insert(5, " ekbal");
cout << "after inserting ekbal : "<<name <<endl;
// erase from string
name.erase (5,name.length());
cout << "name after erasing ekbal : " << name<<endl;
//replacing charaters in string 
name.replace(0,5,"rahul");
cout << "after replacing : "<<name <<endl;
  return 0;
  }  
