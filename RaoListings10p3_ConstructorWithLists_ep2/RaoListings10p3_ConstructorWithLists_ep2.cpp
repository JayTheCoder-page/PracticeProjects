/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 29, 2020, 2:42 PM
 */

#include <iostream>

using namespace std;

void Constrcutor();
class Time
{
protected:
    bool awakeAtDay;
    
public:
    Time(bool sunlight) : awakeAtDay(sunlight){}
    
    void Alert()
    {
        if(awakeAtDay)
        {
            cout<<"This organism is diurnal"<<endl;
        }
        else
        {
            cout<<"This organism is nocturnal"<<endl;
        }
    }
};
class Frog: public Time
{
public:
    Frog() : Time(true){}
};
class Bat: public Time
{
public:
    Bat() : Time(false){} 
};
int main(int argc, char** argv) {
    
    Constrcutor();

    return 0;
}
void Constrcutor()
{
    Frog springPepper;
    Bat caveMyotis;
    
    cout<<"About organism"<<endl;
    
    cout<<"Spring Pepper (frog): ";
    springPepper.Alert();
    
    cout<<"Cave Myotis (bat): ";
    caveMyotis.Alert();
}
