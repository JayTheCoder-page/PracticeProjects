/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on May 4, 2020, 2:18 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void NestedLoopGOV(); //Nested Loop (Generate Own Values)

int main(int argc, char** argv) {
    
    NestedLoopGOV();

    return 0;
}
void NestedLoopGOV()
{
    cout<<"Enter the amount of elements you want the first "
        <<"array to have"<<endl;
    int size1 = 0;
    cin>>size1;
    
    cout<<"The second array will have one element less than the first"<<endl;
    int size2 = size1 - 1;
    
    const int ARRAY1_LEN = size1;
    const int ARRAY2_LEN = size2;
    
    float x[ARRAY1_LEN] = {0};
    float y[ARRAY2_LEN] = {0};
    
    for(int i = 0; i < ARRAY1_LEN; ++i)
    {
        cout<<"Enter element "<<i<<" of the first array"<<endl;
        cin>>x[i];
    }
    
    for(int j = 0; j < ARRAY2_LEN; ++j)
    {
        cout<<"Enter element "<<j<<" of the second array"<<endl;
        cin>>y[j];
    }
    
    cout<<"Each element of the first array will be subtracted by an element"
        <<" of the second array"<<endl;
    
    for(int i = 0; i < ARRAY1_LEN; ++i)
    {
        for(int j = 0; j < ARRAY2_LEN; ++j)
        {
            cout<<x[i]<<" - "<<y[j]<<" = "<<x[i] - y[j]<<endl;
        }
    }    
}

