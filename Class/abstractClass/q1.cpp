#include<iostream>
using namespace std;
//Abstract Class
class Animal{
    public:
    //virtual function
     virtual void sound()= 0;
     void eat(){//normal func
        cout<<"I can eat\n";
     }
};
//derieved class
class Dog: public Animal{
    public:
    void sound ()override{
        cout<<"Bark Bark!\n";
    }
};
int main(){
    // Not animal a as animal is avbstract class
    Dog d;
    d.sound();
    d.eat();
}