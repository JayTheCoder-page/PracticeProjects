/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 31, 2020, 3:35 PM
 */

#include <iostream>

using namespace std;

void protectedI(); //protected Inheritance
class CPU
{
public:
    void Power()
    {
        cout<<"Put batteries in game console"<<endl;
    }
    void Alternative()
    {
        cout<<"Charge game console"<<endl;
    }
    void TurnOn()
    {
        cout<<"Turn game console on"<<endl;
    }
    void Display()
    {
        cout<<"Start menu of game is displayed"<<endl;
    }
};
class Nintendo: protected CPU
{
public:
    void Play()
    {
        Power();
        TurnOn();
        Display();
    }  
};
class Switch: protected Nintendo
{
public:
    void Play()
    {
        Power();
        TurnOn();
        Display();
    }
};
int main(int argc, char** argv) {
    
    protectedI();

    return 0;
}
void protectedI()
{
    Switch begin;
    begin.Play();
}

