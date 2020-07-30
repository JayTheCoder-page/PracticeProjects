/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 29, 2020, 6:32 PM
 */

#include <iostream>

using namespace std;

void Scope();
class Ship
{
private:
    bool boatFloats;
    
public:
    Ship(bool top):boatFloats(top){}
    
    WhatHappens()
    {
        if(boatFloats)
        {
            cout<<"The boat floats above the ocean"<<endl;
        }
        else
        {
            cout<<"The boat sinks to the bottom of the sea"<<endl;
        }
    }
};
class Float: public Ship
{
public:
    Float():Ship(true){}
    
    void WhatHappens()
    {
        cout<<"Enjoy the cruise!"<<endl;
    }
};
class Sink: public Ship
{
public:
    Sink():Ship(false){}
    
    void WhatHappens()
    {
        cout<<"EVACUATE SHIP!!!"<<endl;
        Ship::WhatHappens();
    }
};
int main(int argc, char** argv) {
    
    Scope();

    return 0;
}
void Scope()
{
    Float safe;
    Sink danger;
    
    cout<<"Status of ships"<<endl;
    
    cout<<"Norwegian Escape: ";
    safe.WhatHappens();
    
    cout<<"Titanic: ";
    danger.Ship::WhatHappens();
}
