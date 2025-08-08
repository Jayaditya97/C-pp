#include <iostream>
using  namespace std;

class Engine;
class Car{
    private:
    int speed;

    public:
    Car(int s): speed(s){}
    friend class Engine;
};

class Engine {
public:
    void displaySpeed(const Car& c) {
        cout << "Car speed: " << c.speed << endl;
    }
};

int main(){
    Car mycar(200);
    Engine myengine;
    myengine.displaySpeed(mycar);
    return 0;
}