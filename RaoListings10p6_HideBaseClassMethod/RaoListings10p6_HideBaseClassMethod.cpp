/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 28, 2020, 12:28 PM
 */

#include <iostream>

using namespace std;

void Hide();
class Fish
{
    void Swim()
    {
        cout<<"Fish swims...  !"<<endl;
    }
    
    void Swim(bool isFreshWaterFish) //overloaded version
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
    void Swim()
    {
        cout<<"Tuna swims real fast"<<endl;
    }
};
int main(int argc, char** argv) {
    
    Hide();//Tuna::Swim() Hides Overloaded Method Fish::Swim(bool)

    return 0;
}
void Hide()
{
    Tuna myDinner;
    
    cout<<"About my food"<<endl;
    
    //myDinner.Swim(false); //failure: Tuna::Swim() hides Fish::Swim(bool)
    myDinner.Swim();
}
