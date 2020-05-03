/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on May 3, 2020, 12:13 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <string.h>
#include <cstring>

using namespace std;

void CheckBounds();

int main(int argc, char** argv) {
    
    CheckBounds();

    return 0;
}
void CheckBounds()
{
    cout<<"Enter a line of text: ";
    string userInput;
    getline(cin, userInput);
    
    char copyInput = {'\0'};
    if(userInput.length() < 20)
    {
        strcpy(copyInput, userInput.c_str());
        cout<<"copyInput contains: "<<copyInput<<endl;
    }
    else
    {
        cout<<"Bounds exceeded: won't copy!"<<endl;
    }
    //Compiler won't compile code, skip this for now
}

