//Q.3   Write a program to use conditional ,size ,scope resolution ,unary operator
#include <iostream>
using namespace std;
int x=50;
int main() {
    int a=15, b=25;
    //conditional operator
    int max=(a>b) ? a : b;
    cout<<"max is="<<a<<b<<max<<endl;
    //size of operator
    cout<<"size of int="<<sizeof(int)<<"bytes"<<endl;
    cout<<"sizeof float="<<sizeof(float)<<"bytes"<<endl;
    //scope resolution operatop
    int x=100;
    cout<<"local x="<<x<<endl;
    cout<<"global x="<<::x<<endl;
    //unary operator
    int y=10;                                                                                 OUTPUT :-
    cout<<"unary operator:y="<<y++<<endl;
    cout<<"unary operator:y="<<y--<<endl;
    return 0;
}
