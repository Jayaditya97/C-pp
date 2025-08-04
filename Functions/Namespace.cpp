#include <iostream>
using namespace std;
namespace Outer{
    namespace Inner {
        int x = 42; // Variable in the inner namespace
    }
}
int main() {
    // Accessing the variable in the inner namespace
    cout << "Value of x in Inner namespace: " << Outer::Inner::x << endl;
    return 0;
}