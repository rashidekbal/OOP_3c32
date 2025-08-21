
//Q.5 Write a program to check whether the given no is even or odd
#include <iostream>
using namespace std;
int main(){
   int x;
    cout<<"enter any number:"<<endl;
    cin>>x;
    //check for even or odd.
   if(x%2==0)
    {
        cout<<x<<" is even number"<<endl;
    } else {
        cout<<x<<"is odd number"<<endl;
    }
    return 0; 
}
