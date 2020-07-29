/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 29, 2020, 3:11 PM
 */

#include <iostream>

using namespace std;

void Overload();
class Food
{
private:
    bool containsMeat;
    
public:
    Food(bool protein) : containsMeat(protein){}
    
    void Meal()
    {
        if(containsMeat)
        {
            cout<<"Meat lovers, FEAST!"<<endl;
        }
        else
        {
            cout<<"Vegetarians, eat away!"<<endl;
        }
    }
};
class Burger: public Food
{
public:
    Burger() : Food(true){}
    
    void Meal()
    {
        cout<<"This big, juicy burger is delicious"<<endl;
    }
};
class Cake: public Food
{
public:
    Cake() : Food(false){}
    
    void Meal()
    {
        cout<<"This moist, delicate cake is mouthwatering"<<endl;
    }
};
int main(int argc, char** argv) {
    
    Overload(); 

    return 0;
}
void Overload()
{
    Burger BigMac;
    Cake oreoBlizzard;
    
    cout<<"About food"<<endl;
    
    cout<<"Big Mac: ";
    BigMac.Meal();
    
    cout<<"Oreo Blizzard: ";
    oreoBlizzard.Meal();
}

