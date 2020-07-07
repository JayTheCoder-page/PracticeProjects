/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 6, 2020, 5:39 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void PassyByReference();
void AreaOfSquare(int, int&);

int main(int argc, char** argv) {
    
    PassyByReference();

    return 0;
}
void PassyByReference()
{
    cout<<"Enter the length of a side: ";
    int length = 0;
    cin>>length;
    
    int areaFetched = 0;
    AreaOfSquare(length, areaFetched);
    
    cout<<"Area = "<<areaFetched<<endl;
}
void AreaOfSquare(int L, int& result)
{
    result = L * L;
}
