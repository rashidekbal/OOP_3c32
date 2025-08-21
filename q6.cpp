//Q.6  Wap to print the day of a week corresponding to a number entered by user .
#include <iostream>
using namespace std;
int main() {
   int n;
   cout<<"enter any no b/w 1 to 7 ";
   cin>>n;
   switch(n)  {
    case 1:cout<<"sunday"<<endl;
    break;
    case 2:cout<<"monday"<<endl;
    break;
    case 3:cout<<"tuesday"<<endl;
    break;
    case 4:cout<<"wednesday"<<endl;
    break;
    case 5:cout<<"thursday"<<endl;
    break;
    case 6:cout<<"friday"<<endl;
    break;
    case 7:cout<<"saturday"<<endl;
    break;
    default:cout<<"plz enter the value b/w 1 to 7"<<endl;
   }
    return 0;  
}
