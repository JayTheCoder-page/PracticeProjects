/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on June 20, 2020, 2:35 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void PointerConst(); //Passing Pointers to Functions: Use...
                     //the const Keyword in Calculating Circle Area
void CalcArea(const float* const, //const pointer to const data
              const float* const, //i.e. no charge allowed
              float* const);      //can change data pointer to

int main(int argc, char** argv) {
    
    PointerConst();

    return 0;
}
void PointerConst()
{
    const float Pi = 3.1416;
    
    cout<<"Enter radius of the circle: ";
    float radius = 0;
    cin>>radius;
    
    float area = 0;
    CalcArea(&Pi, &radius, &area);
    
    cout<<"Area is = "<<area<<endl;
}
void CalcArea(const float* const ptrPi, const float* const ptrRadius, float* const ptrArea)        
{
    //check pointers for validity before using
    if(ptrPi && ptrRadius && ptrArea)
    {
        *ptrArea = (*ptrPi) * (*ptrRadius) * (*ptrRadius);
    }
}