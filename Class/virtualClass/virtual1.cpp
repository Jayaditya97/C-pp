#include <iostream>
using namespace std;
class Shape{
    public:
    virtual void draw() = 0; // pure virtual function
    void move(){
        cout << "Moving shape" << endl;
    }
};

class Circle : public Shape{
    public:
    void draw(){
        cout << "Drawing Circle" << endl;
    }
};

int main(){
    Circle c;
    c.draw();
    c.move();
    return 0;
}