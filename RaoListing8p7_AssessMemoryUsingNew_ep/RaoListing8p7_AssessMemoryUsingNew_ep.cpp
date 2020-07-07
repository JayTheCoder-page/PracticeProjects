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
void AllocateRelease();
void AllocateRelease2();


int main(int argc, char** argv) {
    
    AccessMemory(); cout<<endl; //8.7
    //AccessMemory2(); cout<<endl; //8.7
    //AllocateRelease(); cout<<endl; //8.8
    //AllocateRelease2(); cout<<endl; //8.8

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
void AllocateRelease()
{
    cout<<"Input desired number of entries: ";
    int entry = 0;
    cin>>entry;
    
    int* number = new int [entry];
    
    cout<<"Number of entries: "<<hex<<entry<<endl;
    cout<<"Address: "<<number<<endl;
    
    delete number;
}
void AllocateRelease2()
{
    cout<<"Enter the I.Q, of the octopus: ";
    int IQ = 0;
    cin>>IQ;
    
    int* intelligence = new int [IQ];
    
    cout<<"The octopus has an I.Q. of "<<IQ<<endl;
    cout<<"Location: "<<intelligence<<endl;
    
    delete intelligence;
}


























