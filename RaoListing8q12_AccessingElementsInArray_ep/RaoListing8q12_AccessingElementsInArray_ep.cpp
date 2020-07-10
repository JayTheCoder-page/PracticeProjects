/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 9, 2020, 3:14 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void AccessElements();

int main(int argc, char** argv) {
    
    AccessElements();

    return 0;
}
void AccessElements()
{
    const int ARRAY_LEN = 5;
    
    int array[ARRAY_LEN] = {0, 1000, 2001, 206, 27};
    
    int* pointsToArray = array;
    
    cout<<"Displayed using pointer syntax. Operator: *"<<endl;
    for(int counter = 0; counter < ARRAY_LEN; ++counter)
    {
        cout<<*(pointsToArray + counter)<<" ";
    }
    cout<<endl;
    
    cout<<"Displayed using \"normal\" (array) syntax. Operator: []"<<endl;
    for(int counter = 0; counter < ARRAY_LEN; ++counter)
    {
        cout<<array[counter]<<" ";
    }
}

