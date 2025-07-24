#include<iostream>
using namespace std;
int main(){
    char name;
    int id;
    int salary;
    int exp;
    int bonus;
    cout<<"Enter Employee ID: ";
    cin>> id;
    
    cout<<"Enter Employee Name: ";
    cin>> name;
    
    cout<<"Enter Basic Salary: ";
    cin>> salary;
    
    cout<<"Enter Years of experience: ";
    cin>> exp;
    
    if(exp<2){
        cout<<"Bonus: "<< salary+ 0.05*salary;
    }
    else if(exp>=2&& exp<=5){
        cout<<"Bonus: "<< salary+ 0.1*salary;
    }
    else{
        cout<<"Bonus: "<< salary+ 0.15*salary;
    }
    
}