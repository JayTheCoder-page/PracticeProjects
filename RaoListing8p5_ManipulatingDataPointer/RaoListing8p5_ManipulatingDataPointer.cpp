/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on June 15, 2020, 4:59 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void Manipulate();
void PreviousLessons();
void Enumeration();
void Strings();

int main(int argc, char** argv) {
    
    //Manipulate(); //Manipulate Data Using a Pointer and Dereference Operator
    PreviousLessons(); //extra practice
    
    return 0;
}
void Manipulate()
{
    int dogsAge = 30;
    
    cout<<"Initialized dogAge = "<<dogsAge<<endl;
    
    int* pointsToAnAge = &dogsAge;
    
    cout<<"pointsToAnAge points to dogsAge"<<endl;
    
    cout<<"Enter an age for your dog: ";
    
    cin>>*pointsToAnAge;
    
    cout<<"Input stored at "<<hex<<pointsToAnAge<<endl;
    
    cout<<"Integer dogsAge = "<<dec<<dogsAge<<endl;
}
void PreviousLessons()
{
    //Enumeration();
    Strings();
}
void Enumeration()
{
    enum Elements
    {
        water = 1,
        fire = 2,
        earth = 3,
        air = 4
    };
    
    cout<<"The hottest element corresponds to the number "<<fire<<endl;
    
    Elements flame = fire;
    
    cout<<flame<<endl;
}
void Strings()
{
    string sOne = "There once was a boy and ";
    string sTwo = "a fox, and the fox ate ";
    string tThree = "the boy.";
    
    cout<<"The story goes: "<<sOne + sTwo + tThree<<endl;
}
