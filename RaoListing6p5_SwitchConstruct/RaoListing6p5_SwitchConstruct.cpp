/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on May 3, 2020, 1:19 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void Switch();
void PreviousLessons();
const float Pi(const float);
constexpr float GetPi();
void Boolean();

int main(int argc, char** argv) {
    
    Switch();
    //PreviousLessons(); //for extra practice

    return 0;
}
void Switch()
{
    enum daysOfWeek
    {
        Sunday = 0,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    };
    
    cout<<"Find out what the days of the week are named after"<<endl;
    cout<<"Enter a number for a day (Sunday = 0): ";
    int dayInput = Sunday;
    cin>>dayInput;
    
    switch(dayInput)
    {
        case Sunday:
            cout<<"Sunday was named after the Sun"<<endl;
            break;
            
        case Monday:
            cout<<"Monday was named after the the Moon"<<endl;
            break;
        
        case Tuesday:
            cout<<"Tuesday was named after Mars"<<endl;
            break;
            
        case Wednesday:
            cout<<"Wednesday was named after the Mercury"<<endl;
            break;
            
        case Thursday:
            cout<<"Thursday was named after the Jupiter"<<endl;
            break;
            
        case Friday:
            cout<<"Friday was named after the Venus"<<endl;
            break;
            
        case Saturday:
            cout<<"Saturday was named after the Saturn"<<endl;
            break;
            
        default:
            cout<<"Wrong input, execute again"<<endl;
            break;
    }
}
void PreviousLessons()
{
    const float pi = 22.0/7;
    Pi(pi);
    cout<<endl;
    Boolean();
}
const float Pi (const float pi)
{
    cout<<"Constant pi contains the value "<<pi<<endl;
    cout<<"constexpr GetPi() contains the value "<<GetPi()<<endl;
}
constexpr float GetPi()
{
    return 22.0/7;
}
void Boolean()
{
    cout<<"Answer the questions using 0 (false) and 1 (true)"<<endl;
    
    cout<<"Is the temperature outside over 90 degrees F?"<<endl;
    bool isOver90 = false;
    cin>>isOver90;
    
    if(!isOver90)
    {
        cout<<"You can take a nice walk on through the park."<<endl;
    }
    else
    {
        cout<<"Do you have a lot of water in your backpack?"<<endl;
        bool lotsOfWater = false;
        cin>>lotsOfWater;
        
        if(!lotsOfWater)
        {
            cout<<"Stay indoors. You'll become dehydrated."<<endl;
        }
        else
        {
            cout<<"Walk with caution! Stay hydrated in the heat!"<<endl;
        }
    }
}


