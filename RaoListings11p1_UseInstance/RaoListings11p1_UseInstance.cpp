/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on August 3, 2020, 12:07 PM
 */

#include <iostream>

using namespace std;

void Invoke();
class Fish
{
public:
    void Swim()
    {
        cout<<"Fish swim: "<<endl;
    }
};
class Tuna: public Fish
{
public:
    //override Fish::Swim
    void Swim()
    {
        cout<<"Tuna swim: "<<endl;
    }
};
void MakeFishSwim(Fish& inputFish)
{
    //calling Fish::Swim
    inputFish.Swim();
}
int main(int argc, char** argv) {
    
    Invoke();//Invoking Methods Using an Instance of Base Class Fish That Belongs to a Tuna

    return 0;
}
void Invoke()
{
    Tuna myDinner;
    
    //calling Tuna:Swim
    myDinner.Swim();
    
    //sending Tuna as Fish
    MakeFishSwim(myDinner);
}
