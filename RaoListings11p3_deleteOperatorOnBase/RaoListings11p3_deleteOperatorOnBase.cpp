/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on August 3, 2020, 12:33 PM
 */

#include <iostream>

using namespace std;

void dOperatorOnB();
class Fish
{
public:
    Fish()
    {
        cout<<"Constructed Fish"<<endl;
    }
    ~Fish()
    {
        cout<<"Destroyed Fish"<<endl;
    }
};
class Tuna:public Fish
{
public:
    Tuna()
    {
        cout<<"Constructed Tuna"<<endl;
    }
    ~Tuna()
    {
        cout<<"Destroyed Tuna"<<endl;
    }
};
void DeleteFishMemory(Fish* pFish)
{
    delete pFish;
}
int main(int argc, char** argv) {
    
    dOperatorOnB();//A Function That Invokes Delete Operator on Base*

    return 0;
}
void dOperatorOnB()
{
    cout<<"Allocating a Tuna on the free store"<<endl;
    Tuna* pTuna = new Tuna;
    cout<<"Deleting the Tuna: "<<endl;
    DeleteFishMemory(pTuna);
    
    cout<<"Initializing a Tuna on the attack: "<<endl;
    Tuna myDinner;
    cout<<"Automatic destruction as it goes out of scope: "<<endl;
}
