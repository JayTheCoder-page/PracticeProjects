/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 27, 2020, 3:18 PM
 */

#include <iostream>

using namespace std;

void OverridingMethod();
class Fish
{
private:
    bool isFreshWaterFish;
    
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
    Tuna(): Fish(false){}
    
    void Swim()
    {
        cout<<"Tuna swims real fast"<<endl;
    }
};
class Carp: public Fish
{
public:
    Carp(): Fish(true){}
    
    void Swim()
    {
        cout<<"Carp swims real slow"<<endl;
    }
};
int main(int argc, char** argv) {
    
    OverridingMethod();

    return 0;
}
void OverridingMethod()
{
    Carp myLunch;
    Tuna myDinner;
    
    cout<<"About my food"<<endl;
    
    cout<<"Lunch: ";
    myLunch.Swim();
    
    cout<<"Dinner: ";
    myDinner.Swim();
}
