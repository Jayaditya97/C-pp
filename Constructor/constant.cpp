class point{
    int x, y;
    public:
    point(int a, int b) : x(a), y(b) {
        // Constructor initializes x and y with the provided values
    }
    int getX() const { return x; }
    void setX(int val) { x = val; }
};
#include <iostream>
using namespace std;

int main() {
    point p1(3, 4);
    cout << "x = " << p1.getX() << endl;
    return 0;
}