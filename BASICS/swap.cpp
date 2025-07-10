#include <iostream>
using namespace std;

int main(){
    int a, b;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    // Swap using XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "After swapping:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
