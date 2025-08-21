//Q.10  WAP to swap two numbers using function.

#include<iostream>
using namespace std;
//swap function
void swap(int &a,int  &b){
int temp=a;
a=b;
b=temp;
}
int main(){
int x=4;
int y=5;
cout << "x= "<<x << " y= "<< y << " before swapping"<<endl;
swap(x,y);
cout << "x= "<<x << " y= "<< y << " after swapping"<<endl;
  return 0;
}
