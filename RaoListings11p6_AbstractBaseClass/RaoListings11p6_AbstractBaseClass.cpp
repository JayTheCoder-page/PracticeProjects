/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on August 4, 2020, 11:58 AM
 */

#include <iostream>

using namespace std;

void Abstract();
class Fish
{
public:
    //define a pure virtual function Swim
    virtual void Swim() = 0;
};
class Tuna:public Fish
{
public:
    void Swim()
    {
        cout<<"Tuna swims fast in the sea!"<<endl;
    }
};
class Carp:public Fish
{
    void Swim()
    {
        cout<<"Carp swims slow in the lake!"<<endl;
    }
};
void MakeFishSwim(Fish& inputFish)
{
    inputFish.Swim();
}
int main(int argc, char** argv) {
    
    Abstract();

    return 0;
}
void Abstract()
{
    //Fish myFish; // Fails, cannot initiate on ABC
    Carp myLunch;
    Tuna myDinner;
    
    MakeFishSwim(myLunch);
    MakeFishSwim(myDinner);
}
