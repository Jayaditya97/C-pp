#include <iostream>
using namespace std;

int main(){
    int a, b, temp;
    
    cout << "Enter a: ";
    cin >> a;
    
    cout << "Enter b: ";
    cin >> b;

    // Swapping
    temp = a;
    a = b;
    b = temp;

    cout << "After swapping:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    return 0;
}
