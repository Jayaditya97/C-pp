#include <iostream>
using namespace std;

class Vehicle {
protected:
    string name;
public:
    Vehicle(string n) : name(n) {}
    virtual void color() = 0;
    virtual void engine() = 0;
    virtual ~Vehicle() {}
};

class Safety {
public:
    virtual void safetyFeatures() = 0;
    virtual ~Safety() {}
};

class Car : public Vehicle, public Safety {
public:
    Car(string n) : Vehicle(n) {}
    
    void color() override {
        cout << "The car " << name << " is Red." << endl;
    }

    void engine() override {
        cout << "The car " << name << " has a 4-cylinder petrol engine." << endl;
    }

    void safetyFeatures() override {
        cout << "The car " << name << " has airbags and ABS." << endl;
    }
};

class Bike : public Vehicle, public Safety {
public:
    Bike(string n) : Vehicle(n) {}

    void color() override {
        cout << "The bike " << name << " is Black." << endl;
    }

    void engine() override {
        cout << "The bike " << name << " has a 350cc single-cylinder engine." << endl;
    }

    void safetyFeatures() override {
        cout << "The bike " << name << " has disc brakes and helmet safety." << endl;
    }
};

int main() {
    Car myCar("Honda City");
    Bike myBike("Royal Enfield");

    myCar.color();
    myCar.engine();
    myCar.safetyFeatures();

    cout << endl;

    myBike.color();
    myBike.engine();
    myBike.safetyFeatures();

    return 0;
}