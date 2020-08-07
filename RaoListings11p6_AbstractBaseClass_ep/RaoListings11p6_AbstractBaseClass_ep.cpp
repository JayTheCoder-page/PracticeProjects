/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on August 6, 2020, 12:42 PM
 */

#include <iostream>

using namespace std;

void Abstract();
class Planet
{
public:
    virtual void Orbit() = 0;
};
class Mercury:public Planet
{
public:
    void Orbit()
    {
        cout<<"Mercury orbits close to the sun"<<endl;
    }
};
class Neptune:public Planet
{
public:
    void Orbit()
    {
        cout<<"Neptune orbits far from the sun"<<endl;
    }
};
void MakePlanetOrbit(Planet& inputP)
{
    inputP.Orbit();
}
int main(int argc, char** argv) {
    
    Abstract();

    return 0;
}
void Abstract()
{
    Mercury planet1;
    Neptune planet8;
    
    MakePlanetOrbit(planet1);
    MakePlanetOrbit(planet8);
}
