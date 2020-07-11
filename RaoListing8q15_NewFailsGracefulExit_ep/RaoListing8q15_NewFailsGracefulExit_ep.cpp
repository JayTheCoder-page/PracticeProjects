/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 10, 2020, 5:50 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void GracefulExit();
void GracefulExit2();
void NoThrow();

int main(int argc, char** argv) {
    
    GracefulExit(); // Lesson 8.15
    //GracefulExit2();// Lesson 8.15
    //NoThrow();      // Lesson 8.16

    return 0;
}
void GracefulExit()
{
    try
    {
        int* pointsToInt = new int[0x1fffffff];
        
        delete[] pointsToInt;
    }
    catch(bad_alloc)
    {
        cout<<"Memory allocation failed. Ending program."<<endl;
    }
}
void GracefulExit2()
{
    try
    {
        float* pointsToFloat = new float[0x1fffffff];

        delete[] pointsToFloat;
    }
    catch(bad_alloc)
    {
        cout<<"Memory allocation failed. Ending program"<<endl;
    }  
}
void NoThrow()
{
    int* pointsToManyNums = new (nothrow) int [0x1fffffff];
    
    if(pointsToManyNums)
    {
        delete[] pointsToManyNums;
    }
    else
    {
        cout<<"Memory allocation failed. Ending program"<<endl;
    }
}





