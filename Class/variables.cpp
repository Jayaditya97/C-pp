#include <iostream>
using namespace std;

class variables {
public:
    void showVariables() {
        static int staticVar = 10;      // static variable
        int localVar = 20;              // local variable
        instanceVar = 30;               // instance variable (class member)
        cout << "Static Variable: " << staticVar << endl;
        cout << "Local Variable: " << localVar << endl;
        cout << "Instance Variable: " << instanceVar << endl;
        staticVar++; // to show static variable retains value across calls
    }
    int instanceVar; // instance variable
};

int main() {
    variables obj1, obj2;
    obj1.showVariables();
    obj2.showVariables();
    return 0;
}