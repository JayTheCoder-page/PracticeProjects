/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on May 5, 2020, 1:14 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void PassingArray();
void DisplayArray(int[], int);
void DisplayArray(char[], int);

int main(int argc, char** argv) {
    
    PassingArray();

    return 0;
}
void PassingArray()
{
   int myNums[4] = {24, 58, -1, 245};
   DisplayArray(myNums, 4);
   
   char myStatement[7] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};
   DisplayArray(myStatement, 7);
}
void DisplayArray(int numbers[], int length)
{
    for(int index = 0; index < length; ++index)
    {
        cout<<numbers[index]<<" ";
    }
    
    cout<<endl;
}
void DisplayArray(char characters[], int length)
{
    for(int index = 0; index < length; ++index)
    {
        cout<<characters[index]<<" ";
    }
    
    cout<<endl;
}


