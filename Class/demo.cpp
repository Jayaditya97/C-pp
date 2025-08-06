#include <iostream>
using namespace std;

class demo {
    public:
    static int counter;
    demo() {
        counter++;
    }
};
int demo::counter = 0;

int main() {
    demo d1, d2;
    cout << "Counter value: " << demo::counter << endl;
    return 0;
}