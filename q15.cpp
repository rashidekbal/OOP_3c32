// Q.15 WAP to display largest element of an array.
#include<iostream>
using namespace std;
int main(){
  int n;
  int largest;
  cout << "enter array size :";
  cin >>n;
 int  array[n];
 cout << "enter "<< n << " elements : "<<endl;
 for(int i=0;i<n;i++){
  cout << "enter element for index "<<i <<" : ";
  cin >> array[i];
if(i==0){
largest=array[0];}
  if(array[i]>largest){
    largest=array[i];
  } }
   cout << "largest element of array is :" <<largest <<endl;
 return 0;                                                                                         OUTPUT :-  
 }      
