/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on August 8, 2020, 5:01 PM
 */

#include <iostream>

using namespace std;

void cloneFunction();
class Electronic
{
public:
    virtual Electronic* Replica() = 0;
    virtual void Run() = 0;
    virtual ~Electronic(){};
};
class Laptop:public Electronic
{
public:
    Electronic* Clone() override
    {
        return new Laptop(*this);
    }
    void Run() override final
    {
        cout<<"Laptop runs on electricity"<<endl;
    }
};
class HP final:public Laptop
{
public:
    Electronic* Clone() override
    {
        return new HP(*this);
    }
};
class iPhone final:public Electronic
{
    Electronic* Clone() override
    {
        return new iPhone(*this);
    }
    void Run() override final
    {
        cout<<"iPhone runs on electricity"<<endl;
    }
};
int main(int argc, char** argv) {
    
    cloneFunction();
    //Program will NOT run
    //Figure this issue out later

    return 0;
}
void cloneFunction()
{
    const int ARRAY_SIZE = 4;
    
    Electronic* myElectronics[ARRAY_SIZE] = {NULL};
    myElectronics[0] = new Laptop();
    myElectronics[1] = new iPhone();
    myElectronics[2] = new HP();
    myElectronics[3] = new iPhone();
    
    Electronic* myNewElectronic[ARRAY_SIZE];
    
    for(int index = 0; index < ARRAY_SIZE; ++index)
    {
        myNewElectronic[index] = myElectronics[index]->Replica();
    }
    
    for(int index = 0; index < ARRAY_SIZE; ++index)
    {
        myElectronics[index]->Run();
    }
    
    for(int index = 0; index < ARRAY_SIZE; ++index)
    {
        delete myElectronics[index];
        delete myNewElectronic[index];
    }
}
