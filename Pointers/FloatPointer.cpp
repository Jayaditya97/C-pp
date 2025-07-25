#include<iostream>
using namespace std;

int main() {
    float a;
    cout<<"Enter the number: ";
    cin>> a;
    float *ptr = &a;
    cout << "Value using pointer is: " << *ptr << endl;
    return 0;
}