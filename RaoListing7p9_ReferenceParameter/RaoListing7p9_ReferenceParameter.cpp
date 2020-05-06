/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on May 5, 2020, 2:08 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

const float pi = 3.1416;

void Area(float, float&);

void PassByReference();

int main(int argc, char** argv) {
    
    PassByReference();

    return 0;
}
void PassByReference()
{
    cout<<"Enter radius: ";
    float radius = 0;
    cin>>radius;
    
    float areaFetched = 0;
    Area(radius, areaFetched);
    
    cout<<"The area is: "<<areaFetched<<endl;
}
void Area(float radius, float& result)
{
    result = pi * radius * radius;
}
