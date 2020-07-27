/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 27, 2020, 2:02 PM
 */

#include <iostream>

using namespace std;

void Inheritance();
class Fish
{
public:
    bool isFreshWaterFish;
    
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
    Tuna()
    {
        isFreshWaterFish = false;
    }
};
class Carp: public Fish
{
public:
    Carp()
    {
        isFreshWaterFish = true;
    } 
};
int main(int argc, char** argv) {
    
    Inheritance();

    return 0;
}
void Inheritance()
{
    Carp myLunch;
    Tuna myDinner;
    
    cout<<"About my food:"<<endl;
    
    cout<<"Lunch: ";
    myLunch.Swim();
    
    cout<<"Dinner: ";
    myDinner.Swim();
}

