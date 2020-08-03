/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on August 3, 2020, 12:14 PM
 */

#include <iostream>

using namespace std;

void virtualMethod();
class Fish
{
public:
    virtual void Swim()
    {
        cout<<"Fish swims!"<<endl;
    }
};
class Tuna:public Fish
{
public:
    //override Fish::Swim
    void Swim()
    {
        cout<<"Tuna swims!"<<endl;
    }
};
class Carp:public Fish
{
public:
    //override Fish::Swim
    void Swim()
    {
        cout<<"Carp Swims!"<<endl;
    }
};
void MakeFishSwim(Fish& inputFish)
{
    //calling virtual method Swim()
    inputFish.Swim();
}
int main(int argc, char** argv) {
    
    virtualMethod();//The Effect of Declaring Fish::Swim() as virtual Method

    return 0;
}
void virtualMethod()
{
    Tuna myDinner;
    Carp myLunch;
    
    //sending Tuna as Fish
    MakeFishSwim(myDinner);
    
    //sending Carp as Fish
    MakeFishSwim(myLunch);
}
