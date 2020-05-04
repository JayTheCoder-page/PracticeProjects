/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on May 4, 2020, 1:59 PM
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
    const int size1 = 5;
    const int size2 = 4;
    
    float array1[size1] = {1.2, 3.4, 5.6, 7.8, 9.1};
    float array2[size2] = {10.0, 20.0, 30.0, 40.0};
    
    cout<<"Add each float in array1 by each float in array2"<<endl;
    
    for(int i = 0; i < size1; ++i)
    {
        for(int j = 0; j < size2; ++j)
        {
            cout<<array1[i]<<" + "<<array2[j]<<" = "<<array1[i] + array2[j]<<endl;
        }
    }
}

