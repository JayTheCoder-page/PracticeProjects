/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 8, 2020, 3:41 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void MultipleConstructors();
class SolarSystem
{
private:
    string name;
    float mass;
    float distance; //distance from the sun
    
public:
    
    SolarSystem() //default constructor
    {
        float mass = 0; //kg
        float distance = 0; //miles (millions)
    }
    
    SolarSystem(string planetName, float planetMass, 
                                   float planetDistance) //overloaded constructor
    {
        name = planetName;
        mass = planetMass;
        distance = planetDistance; 
        
        cout<<name<<" has a mass of "<<mass<<" kg";
        cout<<" and is "<<distance<<" million miles ";
        cout<<"away from the sun"<<endl;
    }
};
void SingleConstructor();
class InnerPlanets
{
public:
    string name;
    float volume;
    
public: 
    
    SetName(string planetsName)
    {
        name = planetsName;
    }
    
    SetVolume(float planetsVolume)
    {
        volume = planetsVolume; //in km^3
    }
    
    DisplayStats()
    {
        cout<<name<<" has a volume of ";
        cout<<volume<<" km^3"<<endl;
    }
};
void SimpleClass();
class OuterPlanets
{
public:
    string name;
    string color;
    
    Trait()
    {
        cout<<name<<" is "<<color<<endl;
    }
};

int main(int argc, char** argv) {
    
    MultipleConstructors(); cout<<endl;//Lesson 9.4 (Project Title)
    //SingleConstructor();cout<<endl;//Lesson 9.3 i.e. one TYPE of constructor
    //SimpleClass(); //Lesson 9.1

    return 0;
}
void MultipleConstructors()
{
    SolarSystem planet1("Mercury", 3.285e23, 35.98);
    SolarSystem planet2("Venus", 4.8675e24, 67.24);
    SolarSystem planet3("Earth", 5.972e24, 92.96);
    SolarSystem planet4("Mars", 6.39e23, 141.6); 
    SolarSystem planet5("Jupiter", 1.898e27, 483.8);
    SolarSystem planet6("Saturn", 5.683e26, 890.8);
    SolarSystem planet7("Uranus", 8.681e25, 1784); 
    SolarSystem planet8("Neptune", 1.024e26, 2793); 
}
void SingleConstructor()
{
    InnerPlanets planet1;
    
    planet1.SetName("Mercury");
    planet1.SetVolume(6.083e10);
    planet1.DisplayStats();
    
    InnerPlanets planet2;
    
    planet2.SetName("Venus");
    planet2.SetVolume(9.2843e11);
    planet2.DisplayStats();
    
    InnerPlanets planet3;
    
    planet3.SetName("Earth");
    planet3.SetVolume(1.08321e12);
    planet3.DisplayStats();
    
    InnerPlanets planet4;
    
    planet4.SetName("Mars");
    planet4.SetVolume(1.6318e11);
    planet4.DisplayStats();
}
void SimpleClass()
{
    OuterPlanets planet5;
    
    planet5.name = "Jupiter";
    planet5.color = "primarily beige";
    planet5.Trait();
    
    OuterPlanets planet6;
    
    planet6.name = "Saturn";
    planet6.color = "yellowish-brown";
    planet6.Trait();
    
    OuterPlanets planet7;
    
    planet7.name = "Uranus";
    planet7.color = "light blue";
    planet7.Trait();
    
    OuterPlanets planet8;
    
    planet8.name = "Neptune";
    planet8.color = "royal blue (more or less)";
    planet8.Trait();
}
