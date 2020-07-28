/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 28, 2020, 2:23 PM
 */

#include <iostream>

using namespace std;

void MultiInheritance();

class Mammal
{
public:
    void FeedBabyMilk()
    {
        cout<<"Mammal: baby says glug!"<<endl;
    }
};

class Reptile
{
public:
    void SpitVenom()
    {
        cout<<"Reptile: Shoo enemy! Spits venom!"<<endl;
    }
};

class Bird
{
public:
    void LayEggs()
    {
        cout<<"Bird: Laid my eggs, am lighter now!"<<endl;
    }
};

class Platypus: public Mammal, public Bird, public Reptile
{
public:
    void Swim()
    {
        cout<<"Platypus: Viola, I can swim!"<<endl;
    }
};

int main(int argc, char** argv) {
    
    MultiInheritance();//Using Multiple Inheritance to Model a Platypus That is Part Mammal,
                       //Part Bird, and Part Reptile
    return 0;
}
void MultiInheritance()
{
    Platypus realFreak;
    realFreak.LayEggs();
    realFreak.FeedBabyMilk();
    realFreak.SpitVenom();
    realFreak.Swim();
}

