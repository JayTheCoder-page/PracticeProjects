/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 29, 2020, 6:04 PM
 */

#include <iostream>

using namespace std;

void Scope();
class Kid
{
private:
    bool isAboy;
    
public:
    Kid(bool male):isAboy(male){}
    
    void Gender()
    {
        if(isAboy)
        {
            cout<<"one X, one Y"<<endl;
        }
        else
        {
            cout<<"double X"<<endl;
        }
    }
};
class Boy: public Kid
{
public:
    Boy():Kid(true){}
    
    void Gender()
    {
        cout<<"XY"<<endl;
    }
};
class Girl: public Kid
{
public:
    Girl():Kid(false){}
    
    void Gender()
    {
        cout<<"XX"<<endl;
        Kid::Gender();
    }
};
int main(int argc, char** argv) {
    
    Scope();

    return 0;
}
void Scope()
{
    Boy Mars;
    Girl Venus;
    
    cout<<"Chromosome make-up of child"<<endl;
    
    cout<<"Alexander: ";
    Mars.Gender();
    
    cout<<"Elizabeth: ";
    Venus.Kid::Gender();
}
