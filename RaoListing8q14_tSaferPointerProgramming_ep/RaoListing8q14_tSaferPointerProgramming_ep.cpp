/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 10, 2020, 1:00 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void SaferThan8p13();
void Safer2();

int main(int argc, char** argv) {
    
    SaferThan8p13();
    //Safer2();

    return 0;
}
void SaferThan8p13()
{
    cout<<"Is it humid outside (y/n)?: ";
    char userInput = 'x';
    cin>>userInput;
    
    bool* const isHumid = new bool;
    *isHumid = true;
    
    if(userInput == 'n')
    {
        *isHumid = false;
    }
    
    cout<<"Humid? (0 = false, 1 = true): "<<*isHumid<<endl;
    
    delete isHumid; 
}
void  Safer2()
{
    cout<<"Is this a tropical ecosystem (y/n)?: ";
    char userInput = 'x';
    cin>>userInput;
    
    bool* const isTropical = new bool;
    *isTropical = true;
    
    if(userInput == 'n')
    {
        *isTropical = false;
    }
    
    cout<<"Tropical? (yes = 1, no = 0): "<<*isTropical<<endl;
    
    delete isTropical;
}

