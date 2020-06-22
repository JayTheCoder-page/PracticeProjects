/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on June 20, 2020, 3:04 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void DemonstrateArray();

int main(int argc, char** argv) {
    
    DemonstrateArray();

    return 0;
}
void DemonstrateArray()
{
    //Static array of 5 integers
    int myNumbers[5];
    
    //array assigned to pointer to int
    int* pointsToNums = myNumbers;
    
    //Display address contained in pointer
    cout<<"pointsToNums = "<<hex<<pointsToNums<<endl;
    
    //Address of first element of array
    cout<<"&myNumbers[0] = "<<hex<<&myNumbers[0]<<endl; 
}

