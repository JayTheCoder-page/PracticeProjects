/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 27, 2020, 2:11 PM
 */

#include <iostream>

using namespace std;

void protectedKeyword();
class Fish
{
protected:
    bool isFreshWaterFish; //accessible only to derived classes
    
public:
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
        isFreshWaterFish = false; //set protected member in base
    }
};
class Carp: public Fish
{
public: 
    Carp()
    {
        isFreshWaterFish = false;
    }
};
int main(int argc, char** argv) {
    
    protectedKeyword();//A Better class Fish Using protected Keyword to
                       //Expose Its Member Attribute Only to the Derived
    return 0;          //Classes
}
void protectedKeyword()
{
    Carp myLunch;
    Tuna myDinner;
    
    cout<<"About my food"<<endl;
    
    cout<<"Lunch: ";
    myLunch.Swim();
    
    cout<<"Dinner: ";
    myDinner.Swim();
    
    // uncomment line below to see that protected members
    // are not accessible from outside the class hierarchy
    // myLunch.isFreshWaterFish = false
}
