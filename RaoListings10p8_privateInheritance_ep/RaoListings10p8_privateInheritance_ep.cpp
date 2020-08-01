/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 31, 2020, 1:16 PM
 */

#include <iostream>

using namespace std;

void privateInheritance();
class Oven
{
public:
    void Preheat()
    {
        cout<<"Pre-heating..."<<endl;
    }
    void OvenLight()
    {
        cout<<"Light: ON"<<endl;
    }
    void DonePreheating()
    {
        cout<<"Temperature: 350°F"<<endl;
    }
};
class Stove: private Oven
{
public:
    Info()
    {
        Preheat();
        OvenLight();
        DonePreheating();
    }
};
int main(int argc, char** argv) {
    
    privateInheritance();

    return 0;
}
void privateInheritance()
{
    Stove displaySettings;
    displaySettings.Info();
}
