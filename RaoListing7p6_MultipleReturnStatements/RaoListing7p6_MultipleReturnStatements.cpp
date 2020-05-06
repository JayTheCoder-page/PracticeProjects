/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on May 4, 2020, 7:29 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

const float pi = 3.14159265;

void QueryAndCalculate();

int main(int argc, char** argv) {
    
    QueryAndCalculate();

    return 0;
}
void QueryAndCalculate()
{
    cout<<"Enter radius: ";
    float radius = 0;
    cin>>radius;
    
    cout<<"Area: "<<pi * radius * radius<<endl;
    
    cout<<"Do you wish to calculate circumference (y/n)?";
    char calcCircum = 'n';
    cin>>calcCircum;
    
    if(calcCircum == 'n')
    {
        return;
    }
    
    cout<<"Circumference: "<<2 * pi * radius<<endl;
}
