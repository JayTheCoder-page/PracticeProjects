/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on May 5, 2020, 11:51 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

const float pi = 3.14159265;

void OverloadFunction();
float Area(float radius); //for circle
float Area(float radius, float height); //for cylinder
void PreviousLessons();
void NestedArrays();
void MultdimenNestA(); //Multidimensional nested array

int main(int argc, char** argv) {
    
    OverloadFunction();
    //PreviousLessons(); //extra practice

    return 0;
}
void OverloadFunction()
{
    cout<<"Enter z for Cylinder, or any other key for circle: ";
    char userSelection = 'z';
    cin>>userSelection;
    
    cout<<"Enter radius: "<<endl;
    float radius = 0;
    cin>>radius;
    
    if(userSelection == 'z')
    {
        cout<<"Enter height: ";
        float height = 0;
        cin>>height;
        
        //Invoke overloaded variant of Area for Cylinder
        cout<<"Area of cylinder is: "<<Area(radius, height)<<endl;
    }
    else
    {
        cout<<"Area of circle is: "<<Area(radius)<<endl;
    }
}
//for circle
float Area(float radius)
{
    return pi * radius * radius;
}
//overload for cylinder
float Area(float radius, float height)
{
    //reuse the area of circle
    return 2 * Area(radius) + 2 * pi * radius * height;
}
void PreviousLessons()
{
    NestedArrays();
    MultdimenNestA();
}
void NestedArrays()
{
    const int ARRAY1_LEN = 2;
    const int ARRAY2_LEN = 5;
    
    int array1[ARRAY1_LEN] = {2020, 2300};
    int array2[ARRAY2_LEN] = {1, 3, 5, 7, 9};
    
    cout<<"Multiply each element in array1 by an element of array2"<<endl;
    
    for(int i = 0; i < ARRAY1_LEN; ++i)
    {
        for(int j = 0; j < ARRAY2_LEN; ++j)
        {
            cout<<array1[i]<<" x "<<array2[j]<<" = "<<array1[i] * array2[j]<<endl;
        }
    }
}
void MultdimenNestA()
{
    const int row = 3, column = 5;
    
    int array[row][column] = {{1, 2, 3, 4, 5},
                      {2006, 2007, 2008, 2009, 2010},
                      {911, 922, 933, 944, 955}};
    
    for(int i = 0; i < row; ++i)
    {
        for(int j = 0; j < column; ++j)
        {
            cout<<"array ["<<i<<"]["<<j<<"j = "<<array[i][j]<<endl;
        }
    }                    
}
