//Q.8 write a program to check whether a string is palindrome or not.
#include <iostream>
#include<string>
using namespace std;
int main() {
   string str;
   cout<<"enter a string : ";
   cin>>str;
   int n= str.length();
   bool ispalindrom = true;
   for(int i=0;i<n/2;i++)
   {
    if(str[i] != str[n-i-1])
    {
        ispalindrom = false;
    }
   }
   if(ispalindrom){
   cout<<"the string is a palindrom :"<<endl;
    } else{
    cout<<"the string is not palindrom :"<<endl;
   }
    return 0;                                      
}
