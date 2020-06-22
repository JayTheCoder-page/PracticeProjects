/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on June 21, 2020, 6:02 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void SaferPointer(); //Safer (NOT "Solar") Pointer Programming
                     //Correction to Listing 8.13

int main(int argc, char** argv) {
    
    SaferPointer();

    return 0;
}
void SaferPointer()
{
    cout<<"Is it sunny (y/n)? ";
    char userInput;
    cin>>userInput;
    
    //declare pointer and initialize
    bool* const isSunny = new bool;
    *isSunny = true;
    
    if(userInput == 'n')
    {
        *isSunny = false;
    }
    
    cout<<"Boolean flag sunny says: "<<*isSunny<<endl;
    
    //release valid memory
    delete isSunny;
    
    //Unlike 8.13, this program (8.14) ends without crashing
}

