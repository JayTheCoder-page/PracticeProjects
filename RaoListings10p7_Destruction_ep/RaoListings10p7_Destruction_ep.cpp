/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 30, 2020, 5:16 PM
 */

#include <iostream>

using namespace std;

void Destruction();
class FishDummyMember
{
public:
    FishDummyMember()
    {
        cout<<"FDM constructor"<<endl;
    }
    
    ~FishDummyMember()
    {
        cout<<"FDM destructor"<<endl;
    }
};
class Fish
{
protected:
    FishDummyMember dummy;
    
public:
    Fish()
    {
        cout<<"Fish constructor"<<endl;
    }
    
    ~Fish()
    {
        cout<<"Fish destructor"<<endl;
    }
};
class TunaDummyMember
{   
public:
    TunaDummyMember()
    {
        cout<<"TDM constructor"<<endl;
    }
    
    ~TunaDummyMember()
    {
        cout<<"TDM destructor"<<endl;
    }
};
class Tuna: public Fish
{
private:
    TunaDummyMember dummy;
    
public:
    Tuna()
    {
        cout<<"Tuna constructor"<<endl;
    }
    
    ~Tuna()
    {
        cout<<"Tuna destructor"<<endl;
    }
};
int main(int argc, char** argv) {
    
    Destruction();

    return 0;
}
void Destruction()
{
    Tuna myDinner;
}
