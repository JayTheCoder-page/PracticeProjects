/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on June 22, 2020, 12:25 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void NewNothrow();

int main(int argc, char** argv) {
    
    NewNothrow();

    return 0;
}
void NewNothrow()
{
    //Request LOTS of memory space, use nothrow
    int* pointsToManyNums = new(nothrow) int [0x1fffffff];
    
    if(pointsToManyNums) //check pointsToManyNums != NULL
    {
        //Use the allocated memory
        delete[] pointsToManyNums;
    }
    else
    {
        cout<<"Memory allocated failed. Ending program"<<endl;
    }
}

