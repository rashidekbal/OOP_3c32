//  Q.14 WAP to find average of elements of an array.
#include<iostream>
using namespace std;
int main(){
  int n;
  double avg=0;
  cout << "enter array size :";
  cin >>n;
 int  array[n];
 cout << "enter "<< n << " elements : "<<endl;
 for(int i=0;i<n;i++){
  cout << "enter element for index "<<i <<" : ";
  cin >> array[i];
  avg+=array[i];
 }
 avg=avg/n;
 cout << "avg : "<<avg;
return 0;
} 
