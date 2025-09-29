//WAP for dynamic constructor
#include<iostream>
using namespace std;
class demo{
    private :
    int *arr,size;
    public:
    demo(int s):size(s){
        cout << "constructor called"<<endl;
     arr=new int[size];        
    }
   
    void getData(){
        for(int i=0;i<size;i++){
            arr[i]=(i+1)*10;
        }
    }
    void putData(){
        for(int i=0;i<size;i++){
            cout <<arr[i]<<endl; 
        }
    }
     ~ demo(){
        delete arr;
        cout << "destructor called"<<endl;
    }
};
int main(){
    demo *ptr=new demo(5);
    ptr->getData();
    ptr->putData();
    delete ptr;
    return 0;
}