#include <iostream>
using namespace std;

void print(double a){
    cout << "Double: " << a << endl;
}

void print(int a){
    cout << "Integer: " << a << endl;
}

int main(){
    print(10);        // calls int version
    return 0;
}