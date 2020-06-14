/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on May 16, 2020, 7:05 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void PntrReassgn(); //pointer reassignment
void PreviousLessons();
void DefaultValue();
float Area (float radius, float pi = 3.1);
void PassArrayAsFunction();
void DisplayArray(int[], int);
void DisplayArray(char[], int);

int main(int argc, char** argv) {
    
    PntrReassgn();
    //PreviousLessons(); //extra practice

    return 0;
}
void PntrReassgn()
{
    int age = 30;
    
    int* pointsToInt = &age;
    cout<<"pointsToInt points to age now"<<endl;
    
    cout<<"pointsToInt = "<<hex<<pointsToInt<<endl;
    
    int dogAge = 9;
    pointsToInt = &dogAge;
    cout<<"pointsToInt points to dogsAge now"<<endl;
    
    cout<<"pointsToInt = "<<hex<<pointsToInt<<endl;
}
void PreviousLessons()
{
    DefaultValue();
    PassArrayAsFunction();
    //Good job, after 9 days of not coding as a beginner, you remembered how to 
    //use default values and pass arrays as functions :)
}
void DefaultValue()
{
    cout<<"Enter the radius of the circle"<<endl;
    float radius = 0;
    cin>>radius;
    
    cout<<"Would you like to change pi (y/n)"<<endl;
    char changePi = 'n';
    cin>>changePi;
    
    float AreaCircle = 0;
    if(changePi == 'y')
    {
        cout<<"Enter new pi value"<<endl;
        float newPi = 3.1;
        cin>>newPi;
        AreaCircle = Area(radius, newPi);
    }
    else
    {
        AreaCircle = Area(radius);
    }
    
    cout<<"The area of the circle is "<<AreaCircle<<endl;
}
float Area(float radius, float pi)
{
    return radius * radius * pi;
}
void PassArrayAsFunction()
{
    int array[4] = {1, 11, 111, 1111};
    DisplayArray(array, 4);
    
    char arrayC[3] = {'Y', 'o', '\0'};
    DisplayArray(arrayC, 3);
}
void DisplayArray(int integer[], int number)
{
    for (int i = 0; i < number; ++i)
    {
        cout<<integer[i]<<" ";
    }
    cout<<endl;
}
void DisplayArray(char character[], int number)
{
    for (int i = 0; i < number; ++i)
    {
        cout<<character[i]<<" ";
    }
    
    cout<<endl;
}
