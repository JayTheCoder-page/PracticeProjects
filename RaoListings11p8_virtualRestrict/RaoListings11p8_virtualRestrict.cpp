/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on August 4, 2020, 12:16 PM
 */

#include <iostream>

using namespace std;

void Demonstrate();
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
class Mammal:public virtual Animal
{
};
class Bird:public virtual Animal
{
};
class Reptile:public virtual Animal
{
};
class Platypus final:public Mammal, public Bird, public Reptile
{
public:
    Platypus()
    {
        cout<<"Platypus constructor"<<endl;
    }
};

int main(int argc, char** argv) {
    
    Demonstrate();//Demonstrate How virtual Keyword in Inheritance Hierarchy Helps
                  //Restrict the Number of Base Class Animal to One
    return 0;
}
void Demonstrate()
{
    Platypus duckBilledP;
    
    //no compile error there is only one Animal::age
    duckBilledP.age = 25;
}
