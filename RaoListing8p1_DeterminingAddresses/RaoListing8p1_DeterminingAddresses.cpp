/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on May 7, 2020, 5:21 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void Address();
void PreviousLessons();
void DefaultValue();
float Area(float radius, float pi = 3.1);
void PassArrayFunction();
void DisplayArray(int[], int);
void DisplayArray(char[], int);

int main(int argc, char** argv) {
    
    Address();
    //PreviousLessons(); //extra practice

    return 0;
}
void Address()
{
    int age = 30;
    const float gravConstant = 6.67408e-11; //gravitational constant m^3 kg^(-1) s^(-2)
    
    cout<<"Integer age is located at: "<<&age<<endl;
    cout<<"Constant float gravConstant is located at: "<<&gravConstant<<endl;
}
void PreviousLessons()
{
    DefaultValue();
    PassArrayFunction(); //Passing an array as a function
}
void DefaultValue()
{
    cout<<"Enter the radius of the circle: ";
    float radius = 0;
    cin>>radius;
    
    cout<<"Pi is 3.1, do you want to change the value (y/n)?"<<endl;
    char changeValue = 'n';
    cin>>changeValue;
            
    float circleArea = 0;
    if(changeValue == 'y')
    {
        cout<<"Change pi to: "<<endl;
        float newPi = 3.1;
        cin>>newPi;
        circleArea = Area(radius, newPi);
    }
    else
    {
        circleArea = Area(radius);
    }
    
    cout<<"The area of the circle is: "<<circleArea<<endl;
}
float Area(float radius, float pi)
{
    return radius * radius * pi;
}
void PassArrayFunction()
{
    int array[4] = {23, 45, 91, 86};
    DisplayArray(array, 4);
    
    int array2[7] = {1, 2, 3, 4, 5, 6, 7};
    DisplayArray(array2, 7);
    
    char five[5] = {'F', 'i', 'v', 'e', '\0'};
    DisplayArray(five, 5);
    
    char ghost[8] = {'G', 'h', 'o', 's', 't', 's', '!', '\0'};
    DisplayArray(ghost, 8);
}
void DisplayArray(int integer[], int length)
{
    for(int i = 0; i < length; ++i)
    {
        cout<<integer[i]<<" ";
    }
    
    cout<<endl;
}
void DisplayArray(char character[], int length)
{
    for(int i = 0; i < length; ++i)
    {
        cout<<character[i]<<" ";
    }
    
    cout<<endl;
}