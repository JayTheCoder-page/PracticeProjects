/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on June 20, 2020, 3:53 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void AccessElement(); //Accessing Elements in an Array Using the Deference
                      //Operator (*) and using Array Operator ({}) with a Pointer 

int main(int argc, char** argv) {
    
    AccessElement();

    return 0;
}
void AccessElement()
{
    const int ARRAY_LEN = 5;
    
    //Static array of 5 integers, initialized
    int myNumbers[ARRAY_LEN] = {24, -1, -365, -999, 2011};
    
    //Pointer initialized to first element in array
    int* pointToNums = myNumbers;
    
    cout<<"Display array using pointer syntax, operator*"<<endl;
    for (int index = 0; index < ARRAY_LEN; ++index)
    {
        cout<<"Element "<<index<<" = "<<*(myNumbers + index)<<endl;
    }
    
    cout<<"Display array using ptr with array syntax, operator[]"<<endl;
    for(int index = 0; index < ARRAY_LEN; ++index)
    {
        cout<<"Element "<<index<<" = "<<pointToNums[index]<<endl;
    }
}

