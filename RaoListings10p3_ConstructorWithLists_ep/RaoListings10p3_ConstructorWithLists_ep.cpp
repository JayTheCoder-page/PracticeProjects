/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 29, 2020, 2:18 PM
 */

#include <iostream>

using namespace std;
void Constructor();
class Universe
{
protected:
    bool insideMilkyWay;
    
public:
    Universe(bool insideMilky) : insideMilkyWay(insideMilky){}
    
    void Space()
    {
        if(insideMilkyWay)
        {
            cout<<"This object is inside the Milky Way galaxy"<<endl;
        }
        else
        {
            cout<<"This object is outside the Milky Way galaxy"<<endl;
        }
    }
};
class SolarSystem: public Universe
{
public:
    SolarSystem() : Universe(true){}
};
class AndromedaeGalaxy: public Universe
{
public:
    AndromedaeGalaxy() : Universe(false){}
};
int main(int argc, char** argv) {
    
    Constructor();

    return 0;
}
void Constructor()
{
    SolarSystem Jupiter;
    AndromedaeGalaxy planet14AndroAb; //14 Andromedae b 
    
    cout<<"About object"<<endl;
    
    cout<<"Jupiter: ";
    Jupiter.Space();
    
    cout<<"14 Andromedae b: ";
    planet14AndroAb.Space(); 
}
