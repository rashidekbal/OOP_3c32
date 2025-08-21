//Q.9  WAP to find sum of first n natural no using do-while loop.

#include <iostream>
using namespace std;
int main() {
  int n,i=1,sum=0;
  cout<<"enter any number : ";
  cin>>n;
  do{
      sum = sum+ i;
      i++;
  }while(i<=n);
  cout<<"sum of first "<<n<<" natural no "<<sum<<endl;
   
    return 0;
}
