/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on May 4, 2020, 6:47 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

const float Pi = 3.14159265;

void TwoParameters();
float SurfaceArea(float radius, float height);

int main(int argc, char** argv) {
    
    TwoParameters();

    return 0;
}
void TwoParameters()
{
    cout<<"Enter the radius of the cylinder: ";
    float radius = 0;
    cin>>radius;
    
    cout<<"Enter the height of the cylinder: ";
    float height = 0;
    cin>>height;
    
    cout<<"Surface Area: "<<SurfaceArea(radius, height)<<endl;
}
float SurfaceArea(float radius, float height)
{
    float area = 2 * Pi * radius * radius + 2 * Pi * radius * height;
    return area;
}

