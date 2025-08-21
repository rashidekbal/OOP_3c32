//Q.4   write a program to check whether a character is vowels or not.
#include <iostream>
using namespace std;
int main() {
   char ch;
    cout<<"enter the charactor :"<<endl;
    cin>>ch;
    //check for vowels.
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        cout<<"charactor is vowel"<<ch<<endl;
    }
    else
    {
        cout<<"charactor is not vowel"<<ch<<endl;
    }
    return 0;
}

