/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on August 4, 2020, 12:05 PM
 */

#include <iostream>

using namespace std;

void NumberBase();
class Animal
{
public:
    Animal()
    {
        cout<<"Animal constructor"<<endl;
    }
    
    //sample member
    int age;
};
class Mammal:public Animal
{
};
class Bird:public Animal
{
};
class Reptile:public Animal
{
};
class Platypus:public Mammal, public Bird, public Reptile
{
public:
    Platypus()
    {
        cout<<"Platypus constructor"<<endl;
    }
};
int main(int argc, char** argv) {
    
    NumberBase();//Check for the Number of Base Class Animal Instances
                 //for One Instance Platypus
    return 0;
}
void NumberBase()
{
    Platypus duckBilledP;
    
    //uncomment next line to see compile failure
    //age is ambiguous as there are three instances of base Animal
    //duckBilledP.age = 25;  
}
