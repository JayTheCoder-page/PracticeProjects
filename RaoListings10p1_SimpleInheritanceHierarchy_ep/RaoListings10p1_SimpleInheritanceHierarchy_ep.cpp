/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 29, 2020, 1:02 PM
 */

#include <iostream>

using namespace std;

void Inheritance();
class Monkey
{
public:
    bool isOldWorldMonkey;
    
    void Swing()
    {
        if(isOldWorldMonkey)
        {
            cout<<"Monkey lives in Africa or Asia"<<endl;
        }
        else
        {
            cout<<"Monkey lives in South or Central America"<<endl;
        }
    }
};
class Baboon: public Monkey
{
public:
    Baboon()
    {
        isOldWorldMonkey = true;
    }
};
class Capuchin: public Monkey
{
public:
    Capuchin()
    {
        isOldWorldMonkey = false;
    }
};
int main(int argc, char** argv) {
    
    Inheritance();

    return 0;
}
void Inheritance()
{
    Baboon zoo;
    Capuchin nationalPark;
    
    cout<<"Info about animal"<<endl;
    
    cout<<"Baboon: ";
    zoo.Swing();
    
    cout<<"Capuchin: ";
    nationalPark.Swing();          
}
