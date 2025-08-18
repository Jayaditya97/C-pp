#include <iostream>
using namespace std;

class Rectangle {
    int length;
    int width;
public:
    Rectangle(int l, int w) : length(l), width(w) {}
    int area() {
        return length * width;
    }
    int perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    int l, w;
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter width: ";
    cin >> w;
    Rectangle rect(l, w);
    cout << rect.area() << endl;
    cout << rect.perimeter() << endl;
    return 0;
}