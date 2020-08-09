/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on August 7, 2020, 3:12 PM
 */

#include <iostream>

using namespace std;

void Demonstrate();
class Entity
{
public: 
    Entity()
    {
        cout<<"Entity constructor"<<endl;
    }
    
    int age;
};
class RomanGod:virtual public Entity
{
};
class Planet:virtual public Entity
{
};
class Neptune final:public RomanGod, public Planet
{
public:
    Neptune()
    {
        cout<<"Neptune constructor"<<endl;
    }
};
int main(int argc, char** argv) {
    
    Demonstrate();

    return 0;
}
void Demonstrate()
{
    Neptune mythology;
    
    mythology.age = 2,700; //Roman mythology is ~2.700 years old as of today
}
