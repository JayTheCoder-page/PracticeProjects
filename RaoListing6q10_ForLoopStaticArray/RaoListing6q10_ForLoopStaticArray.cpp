/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on May 3, 2020, 3:54 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void ForLoopStaticArray();

int main(int argc, char** argv) {
    
    ForLoopStaticArray();
   
    return 0;
}
void ForLoopStaticArray()
{
    const int size = 5;
    int array[size] = {0};
    
    cout<<"Populate array of "<<size<<" integers"<<endl;
    
    for(int counter = 0; counter < size; ++counter)
    {
        cout<<"Enter an integer for the element "<<counter<<endl;
        cin>>array[counter];
    }
    
    cout<<"Displaying contents of array: "<<endl;
    
    for(int counter = 0; counter < size; ++counter)
    {
        cout<<"Element "<<counter<<" = "<<array[counter]<<endl;
    }
}

