/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on August 3, 2020, 12:48 PM
 */

#include <iostream>

using namespace std;

void virtualDestructor();
class Fish
{
public:
    Fish()
    {
        cout<<"Constructed Fish"<<endl;
    }
    virtual ~Fish() //virtual destructor!
    {
        cout<<"Destroyed Fish"<<endl;
    }
};
class Tuna:public Fish
{
public:
    Tuna()
    {
        cout<<"Constructor Tuna"<<endl;
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
    
    virtualDestructor();//Using virtual Destructors to Ensure That Destructors in Derived
                        //Classes Are Invoked Deleting a Pointer of Type Base*
    return 0;
}
void virtualDestructor()
{
    cout<<"Allocating a Tuna on the free store:"<<endl;
    Tuna* pTuna = new Tuna;
    cout<<"Delete the Tuna: "<<endl;
    DeleteFishMemory(pTuna);
    
    cout<<"Instantiating a Tuna on the stack:"<<endl;
    Tuna myDinner;
    cout<<"Automatic destruction as it goes out of scope: "<<endl;
}
