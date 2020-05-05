/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on May 4, 2020, 7:01 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void DefaultValue();
float Area(float radius, float pi = 3.14);

int main(int argc, char** argv) {
    
    DefaultValue();

    return 0;
}
void DefaultValue()
{
    cout<<"Enter radius: ";
    float radius = 0;
    cin>>radius;
    
    cout<<"pi is 3.14, do you wish to change it (y/n)?"<<endl;
    char changePi = 'n';
    cin>>changePi;
    
    float circleArea = 0;
    if(changePi == 'y')
    {
        cout<<"Enter new pi: ";
        float newPi = 3.14;
        cin>>newPi;
        circleArea = Area(radius, newPi);
    }
    else
    {
        circleArea = Area(radius);
    }
    
    cout<<"Area is: "<<circleArea<<endl;
}
float Area(float radius, float pi)
{
    return pi * radius * radius;
}

