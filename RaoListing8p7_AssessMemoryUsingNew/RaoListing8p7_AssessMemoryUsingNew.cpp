/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on June 16, 2020, 2:18 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void AssessMemory(); //Assess memory using new, releasing memory using delete

int main(int argc, char** argv) {
    
    AssessMemory();

    return 0;
}
void AssessMemory()
{
    //Request for memory space using an int
    int *pointsToAge = new int;
    
    //Use the allocated memory to store a number
    cout<<"Enter your dog's age: ";
    cin>> *pointsToAge;
    
    //use indirection operator* to access value
    cout<<"Age "<<*pointsToAge<<" is stored at "<<hex<<
            pointsToAge<<endl;
    
    delete pointsToAge;
    
    //delete cannot be used unless a new was previously used
    //new - returns pointers
    //delete - de-allocates range of elements
}

