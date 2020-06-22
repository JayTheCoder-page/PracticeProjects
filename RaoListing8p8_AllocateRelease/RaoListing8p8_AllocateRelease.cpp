/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on June 16, 2020, 2:50 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void AssessingReleasing(); //allocate using new[...], release using delete[]

int main(int argc, char** argv) {
    
    AssessingReleasing();

    return 0;
}
void AssessingReleasing()
{
    cout<<"How many integers shall I reserve memory for?"<<endl;
    int numEntries = 0;
    cin>>numEntries;
    
    int* myNumbers = new int[numEntries];
    
    cout<<"Memory allocated at: "<<myNumbers<<hex<<endl;
    
    //de-allocate before exiting
    delete[] myNumbers;
}
