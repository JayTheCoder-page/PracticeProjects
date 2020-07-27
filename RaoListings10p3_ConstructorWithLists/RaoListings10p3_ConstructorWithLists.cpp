/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 27, 2020, 2:40 PM
 */

#include <iostream>

using namespace std;

void ConstructorWithList();
class Fish
{
protected:
    bool isFreshWaterFish; //accessible only to derived classes
    
public:
    //Fish constructor
    Fish(bool isFreshWater) : isFreshWaterFish(isFreshWater){}
    
    void Swim()
    {
        if(isFreshWaterFish)
        {
            cout<<"Swims in lake"<<endl;
        }
        else
        {
            cout<<"Swims in sea"<<endl;
        }
    }
};
class Tuna: public Fish
{
public:
    Tuna(): Fish(false){} //constructor initializes base
};
class Carp: public Fish
{
public:
    Carp(): Fish(true){}
};
int main(int argc, char** argv) {
    
    ConstructorWithList();

    return 0;
}
void ConstructorWithList()
{
    Carp myLunch;
    Tuna myDinner;
    
    cout<<"About my dinner"<<endl;
    
    cout<<"Lunch: ";
    myLunch.Swim();
    
    cout<<"Dinner: ";
    myDinner.Swim();
}
