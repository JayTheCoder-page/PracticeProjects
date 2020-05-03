/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on May 3, 2020, 4:09 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void Loop();

int main(int argc, char** argv) {
    
    Loop();

    return 0;
}
void Loop()
{
    cout<<"Enter the amount of elements you want the array "
        <<"to have: ";
    int integer = 0;
    cin>>integer;
    
    const int length = integer;
    int myNumbers[length] = {0};
    
    cout<<"Populate array of "<<integer<<" integers"<<endl;
    
    for(int counter = 0; counter < integer; ++counter)
    {
        cout<<"Enter an integer for element "<<counter<<endl;
        cin>>myNumbers[counter];
    }
    
    cout<<"Displaying contents of array:"<<endl;
    
    for(int counter = 0; counter < integer; ++counter)
    {
        cout<<"Element "<<counter<<" = "<<myNumbers[counter]<<endl;
    }
}

