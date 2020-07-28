/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 28, 2020, 12:38 PM
 */

#include <iostream>

using namespace std;

void OrderOf();
class FishDummyMember
{
public:
    FishDummyMember()
    {
        cout<<"FishDummyMember constructor"<<endl;
    }
    
    ~FishDummyMember()
    {
        cout<<"FishDummy destructor"<<endl;
    }
};
class Fish
{
protected:
    FishDummyMember dummy;
    
public:
    //Fish constructor
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
        cout<<"TunaDummyMember"<<endl;
    }
    
    ~TunaDummyMember()
    {
        cout<<"TunaDummyMember destructor"<<endl;
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
    
    OrderOf(); //The Order Of Construction and Destruction of the Base,
                    //Derived Class, and Members Thereof
    return 0;
}
void OrderOf()
{
    Tuna myDinner;
}
