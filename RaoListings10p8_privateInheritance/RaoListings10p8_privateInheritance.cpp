/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 28, 2020, 1:35 PM
 */

#include <iostream>

using namespace std;

void privateInheritance();
class Motor
{
public:
    void SwitchIgnition()
    {
        cout<<"Ignition ON"<<endl;
    }
    void PumpFuel()
    {
        cout<<"Fuel in cylinders"<<endl;
    }
    void FireCylinders()
    {
        cout<<"Vroooom"<<endl;
    }
};

class Car: private Motor //private Inheritance
{
public:
    void Move()
    {
        SwitchIgnition();
        PumpFuel();
        FireCylinders();
    }
};

int main(int argc, char** argv) {
    
    privateInheritance(); //A class Car Related to class Motor via private
                          //Inheritance
    return 0;
}
void privateInheritance()
{
    Car myDreamCar;
    myDreamCar.Move();
}
