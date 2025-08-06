#include <iostream>
using namespace std;

class Number{
    public:
    int value;
};
int main(){
    Number a;
    a.value = 20;
    Number b = a;
    b.value = 50;
    cout << a.value << b.value;
    return 0;
}
