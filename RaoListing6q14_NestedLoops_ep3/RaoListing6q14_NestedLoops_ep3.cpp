/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on May 4, 2020, 3:04 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void NestedLoop();

int main(int argc, char** argv) {
    
    NestedLoop();

    return 0;
}
void NestedLoop()
{
    cout<<"Set array b the have 1, 2, or, 3 elements"<<endl;
    unsigned int sizeB = 0;
    cin>>sizeB;
    
    while(sizeB == 0 || sizeB > 3)
    {
        cout<<"ERROR! Invalid Entry. Enter 1, 2, or 3"<<endl;
        cin>>sizeB;
    }
    
    cout<<"Array a will have triple the amount of elements as array b"<<endl;
    unsigned int sizeA = sizeB * 3;
    
    const int lengthA = sizeA;
    const int lengthB = sizeB;
    
    int a[lengthA] = {0};
    int b[lengthB] = {0};
    
    for(int i = 0; i < lengthA; ++i)
    {
        cout<<"Enter element "<<i<<" of "<<"array a"<<endl;
        cin>>a[i];  
    }
    
    for(int j = 0; j < lengthB; ++j)
    {
        cout<<"Enter element "<<j<<" of "<<"array b"<<endl;
        cin>>b[j];  
    }
    
    cout<<"Each element of array a will be multiplied by each element of "
        <<" array b"<<endl;
    
    for(int i = 0; i < lengthA; ++i)
    {
        for(int j = 0; j < lengthB; ++j)
        {
            cout<<a[i]<<" x "<<b[j]<<" = "<<a[i] * b[j]<<endl;
        }
    }
}
