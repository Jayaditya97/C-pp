#include <iostream>
using namespace std;

int main(){
    int x = 5;
    int* p;      // Pointer to int
    p = &x;      // Store address of x in p
    cout << *p<<endl<<"\n";  // Outputs 5 (the value of x)
    *p = 10;     // Changes x to 10
    cout << *p;
    return 0;
}