/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on June 21, 2020, 6:24 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void GracefulExit();

int main(int argc, char** argv) {
    
    GracefulExit();

    return 0;
}
//remove the try-catch block to see application crash
void GracefulExit()
{   
    try
    {
        //Request a LOT of memory!
        int* pointsToManyNums = new int [0x1fffffff];
        //Use the allocated memory
        delete[] pointsToManyNums;
    }
    catch (bad_alloc)
    {
        cout<<"Memory allocation failed. Ending program"<<endl;
    }
}

