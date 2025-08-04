#include <iostream>
using namespace std;
namespace  {
    int hidden = 5;
}
namespace hidden {
    int hidden = 10; // This is a different variable, not the one in the anonymous namespace previosly declared
}
int main() {
    // Accessing the hidden variable in the anonymous namespace
    cout << ::hidden << endl; // Accesses 'hidden' from the anonymous namespace
    return 0;
}