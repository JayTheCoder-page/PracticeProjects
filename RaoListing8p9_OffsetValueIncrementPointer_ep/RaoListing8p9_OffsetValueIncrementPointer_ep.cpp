/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 9, 2020, 12:40 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void Offset();
void Offset2();
void Offset3();

int main(int argc, char** argv) {
    
    Offset();
    //Offset2();
    //Offset3();

    return 0;
}
void Offset()
{
    cout<<"Enter the number of entries: ";
    int numEntry = 0;
    cin>>numEntry;
    
    int* pointsToEntry = new int [numEntry];
    
    cout<<"There will be "<<numEntry<<" integers"<<endl;
    for(int i = 0; i < numEntry; ++i)
    {
        cout<<"Enter entry "<<i<<": ";
        cin>>*(pointsToEntry + i);
    }
    
    cout<<"Display entries"<<endl;
    for(int i = 0; i < numEntry; ++i)
    {
        cout<<*(pointsToEntry + i)<<" ";
    }   
    
    cout<<endl;
    
    pointsToEntry -= numEntry;
    
    delete[] pointsToEntry;
}
void Offset2()
{
    cout<<"How many integers would you like to input? ";
    int integer = 0;
    cin>>integer;
    
    int* pointsToInt = new int[integer]; 
    
    for(int counter = 0; counter < integer; ++counter)
    {
        cout<<"Enter integer #"<<counter<<": ";
        cin>>*(pointsToInt + counter);
    }
    
    for(int counter = 0; counter < integer; ++counter)
    {
        cout<<*(pointsToInt + counter)<<" ";
    }
    
    cout<<endl;
    
    pointsToInt -= integer;
    
    delete[] pointsToInt;
}
void Offset3()
{
    cout<<"Enter a number: ";
    unsigned int num = 0;
    cin>>num;
    
    int* PointsToNumber = new int [num];
    
    cout<<num<<" numbers will need to be entered"<<endl;
    for(int index = 0; index < num; ++index)
    {
        cout<<"Enter num"<<index<<": ";
        cin>>*(PointsToNumber + index);
    }
    
    cout<<"Display"<<endl;
    for(int index = 0; index < num; ++index)
    {
        cout<<*(PointsToNumber + index)<<" ";
    }
    
    cout<<endl;
    
    PointsToNumber -= num;
    
    delete[] PointsToNumber;
}

