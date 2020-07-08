/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 7, 2020, 9:28 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void Constructor();
class Galaxy
{
private:
    float age;
    string name;
    
public:
    Galaxy()
    {
        //cout<<"Constructed an instance of class Galaxy";
        //cout<<endl;
    }
    
    SetAge(float galaxyAge)
    {
        age = galaxyAge;
    }
    
    SetName(string galaxyName)
    {
        name = galaxyName;
    }
    
    DisplayGalaxy()
    {
        cout<<"This galaxy is called "<<name;
        cout<<" and is "<<age<<" billion years old";
        cout<<endl;
    }
};

int main(int argc, char** argv) {
    
    Constructor();

    return 0;
}
void Constructor()
{
    Galaxy g1;
    g1.SetAge(13.51); //BYO = billions years old
    g1.SetName("Milky Way");
    g1.DisplayGalaxy();
    
    Galaxy g2;
    g2.SetAge(13.31); //BYO = billions years old
    g2.SetName("Messier 81");
    g2.DisplayGalaxy();
    
    Galaxy g3;
    g3.SetAge(0.4003); //BYO = billions years old
    g3.SetName("Whirlpool Galaxy (Messier 51)");
    g3.DisplayGalaxy();
}
