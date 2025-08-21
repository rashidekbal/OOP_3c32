// Q.12 WAP to implement function overloading.

#include <iostream>
using namespace std;
// Function to add two integers
int add(int a, int b) {
    return a + b;
}
// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}
// Function to add two floating numbers
float add(float a, float b) {
    return a + b;
}
int main() {
    cout << "Sum of 2 integers: " << add(10, 20) << endl;
    cout << "Sum of 3 integers: " << add(10, 20, 30) << endl;
    cout << "Sum of 2 floats: " << add(5.5f, 4.5f) << endl;
    return 0;
}  
