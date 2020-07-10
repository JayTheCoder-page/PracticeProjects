/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 9, 2020, 1:44 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

const float pi = 3.1416;

void PassPointer();
void CalcArea(const float* const, const float* const, float* const);
void PassPointer2();
void CalcVolume(const float* const, const float* const, float* const);
void ArrayPointer();

int main(int argc, char** argv) {
    
    //PassPointer(); //Lesson 8.10
    //PassPointer2(); //Lesson 8.10
    ArrayPointer(); //Lesson 8.11: Array Variable as Pointer

    return 0;
}
void PassPointer()
{   
    cout<<"Enter the radius of the circle: ";
    float radius = 0;
    cin>>radius;
    
    float area = 0;
    CalcArea(&pi, &radius, &area);
    
    cout<<"The area of the circle is: "<<area<<endl;
    
}
void CalcArea(const float* const pointerPi, const float* const pointerRadius,
                                            float* const pointerArea)
{
    if(pointerPi && pointerRadius && pointerArea)
    {
        *pointerArea = (*pointerRadius) * (*pointerRadius)
                                        * (*pointerPi);
    }
}
void PassPointer2()
{   
    cout<<"Enter the radius of the sphere: ";
    float radius = 0;
    cin>>radius;
    
    float volume = 0;
    CalcVolume(&pi, &radius, &volume);
    
    cout<<"The volume of the sphere is: "<<volume<<endl;
}
void CalcVolume(const float* const pPi, const float* const pRadius, float* const pVolume)
{
    if(pPi && pRadius && pVolume)
    {
        *pVolume = (4/3) * (*pPi) * (*pRadius) * (*pRadius) * (*pRadius);
    }
}
void ArrayPointer()
{
    int myNumbers[5];
    
    int* pointsToNums = myNumbers;
    
    cout<<"pointsToNumbers = "<<hex<<pointsToNums<<endl;
    
    cout<<"&myNumbers[0] = "<<hex<<&myNumbers[0]<<endl;
}
