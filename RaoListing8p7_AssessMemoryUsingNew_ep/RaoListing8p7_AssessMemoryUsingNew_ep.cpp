/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 6, 2020, 5:52 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void AccessMemory();
void AccessMemory2();

int main(int argc, char** argv) {
    
    AccessMemory(); cout<<endl;
    AccessMemory2();

    return 0;
}
void AccessMemory()
{
    int* pointsToInt = new int;
    
    cout<<"Enter dog's age: ";
    cin>>*pointsToInt;
    
    cout<<"Dog's age: "<<*pointsToInt<<endl;
    cout<<"Located at address: "<<pointsToInt<<endl;;
    
    delete pointsToInt; 
}
void AccessMemory2()
{
    float* pointsToScore = new float;
    
    cout<<"Enter the test score you received: ";
    cin>>*pointsToScore;
    
    while(*pointsToScore > 100 || *pointsToScore < 0)
    {
        cout<<"Invalid entry. Enter a score b/w 0 and 100"<<endl;
        cin>>*pointsToScore;
    }
    
    cout<<"The score is "<<*pointsToScore<<endl;
    cout<<"Address: "<<pointsToScore<<endl;
    
    delete pointsToScore;
}

