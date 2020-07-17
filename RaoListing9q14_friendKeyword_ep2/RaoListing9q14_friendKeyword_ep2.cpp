/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 17, 2020, 2:47 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void friendKeyword();
class Rasin
{
private:
    friend void DisplayMass(const Rasin& driedGrape);
    int age;
    float mass;
    
public:
    Rasin(int rasinAge, float rasinMass)
    {
        age = rasinAge;
        mass = rasinMass;
    }
};
void DisplayMass(const Rasin& driedGrape)
{
    cout<<driedGrape.mass<<endl;
}
int main(int argc, char** argv) {
    
    friendKeyword();

    return 0;
}
void friendKeyword()
{
    Rasin rasinNumOne(1, 0.25);
    cout<<"Accessing private mass, grape mass is: ";
    DisplayMass(rasinNumOne);
}
