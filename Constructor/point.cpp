#include <iostream>
class point{    
    private:
    int x,y;

    public:
    point(int a, int b) : x(a), y(b) {
        std::cout << "Constructor called with values: x = " << x << ", y = " << y << std::endl;
    }
};
int main() {
    point p1(3, 4);
    return 0;
}
