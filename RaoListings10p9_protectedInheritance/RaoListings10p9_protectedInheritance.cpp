/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 28, 2020, 2:01 PM
 */

#include <iostream>

using namespace std;

void protectedInheritance();
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

class Car:protected Motor
{
public:
    void Move()
    {
        SwitchIgnition();
        PumpFuel();
        FireCylinders();
    }
};

class RaceCar:protected Car
{
public:
    void Move()
    {
        SwitchIgnition();  //RaceCar has access tom members of
        PumpFuel();   //base Motor due to "protected" inheritance
        FireCylinders(); //between RaceCar & Car, Car and Motor
        FireCylinders();
        FireCylinders();
    }
};

int main(int argc, char** argv) {
    
    protectedInheritance();//class RaceCar That Derives from class Car That Derives
                           //from class Motor Using protected Inheritance
    return 0;
}
void protectedInheritance()
{
    RaceCar myDreamCar;
    myDreamCar.Move();
}
