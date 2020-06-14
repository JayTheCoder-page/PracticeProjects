/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on May 18, 2020, 7:17 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

const float pi = 3.14159265;

void Dereference();
void PreviousLessons();
void ThreeParameterFunction();
int Area (int, int, int);
void MultReturnState(); //Multiple Return Statements
void PassByReference();
void Area(float, float&);
void ArrayElements();
constexpr int Square (int);
void ValueInsertion();

int main(int argc, char** argv) {
    
    Dereference();
    //PreviousLessons();
    
    return 0;
}
void Dereference()
{
    int age = 30;
    int dogsAge = 9;
    
    cout<<"Integer age = "<<age<<endl;
    cout<<"Integer dogsAge = "<<dogsAge<<endl;
    
    int* pointsToInt = &age;
    cout<<"pointsToInt points to age"<<endl;
    
    //Displaying the value of pointer
    cout<<"pointsToInt = "<<hex<<pointsToInt<<endl;
    
    //Displaying the value of pointed location
    cout<<"*pointsToInt = "<<dec<<*pointsToInt<<endl;
    
    pointsToInt = &dogsAge;
    cout<<"pointsToInt points to dogsAge now"<<endl;
    
    cout<<"pointsToInt = "<<hex<<pointsToInt<<endl;
    cout<<"*pointsToInt = "<<*pointsToInt<<endl;
}
void PreviousLessons()
{
    ThreeParameterFunction();
    //MultReturnState();]
    //PassByReference();
    //ArrayElements();
    //ValueInsertion();
}
void ThreeParameterFunction()
{
    cout<<"Enter the height of the rectangle: ";
    int height = 0;
    cin>>height;
    
    cout<<"Enter the length of the rectangle: ";
    int length = 0;
    cin>>length;
    
    cout<<"Enter the width of the rectangle: ";
    int width = 0;
    cin>>width;
    
    cout<<"The surface area of the rectangle is "<<Area(length, width, height)<<endl;
}
int Area(int length, int width, int height)
{
    int area = (2 * length * width) + (2 * length * height) +
               (2 * height * width);
    return area;
}
void MultReturnState()
{
    cout<<"Enter the radius of the circle"<<endl;
    float radius = 0;
    cin>>radius;
    
    cout<<"Area = "<<radius * radius * pi<<endl;
    
    cout<<"Would you like to know the circumference? (y/n)"<<endl;
   
    char Circum = 'n';
    cin>>Circum;
    
    if(Circum == 'n')
    {
        return;
    }
    
    cout<<"Circumference = "<<2 * pi * radius<<endl;
}
void PassByReference()
{
    cout<<"Enter radius of circle: ";
    float radius = 0;
    cin>>radius;
    
    float areaFetched = 0;
    Area(radius, areaFetched);
    
    cout<<"area = "<<areaFetched<<endl;
}
void Area(float radius, float& result)
{
    result = pi * radius * radius;
}
void ArrayElements()
{
    const int SIZE = 5;
    int array[SIZE] = {1, 2, 3, 4, 5};
    
    int secondArray[Square(SIZE)];
    
    cout<<"Enter element of array to be changed"<<endl;
    int Element = 0;
    cin>>Element;
    
    cout<<"Enter new number"<<endl;
    int newNumber = 0;
    cin>>newNumber;
    
    array[Element] = newNumber;
    secondArray[Element] = newNumber;
    
    cout<<"Element "<<Element<<" in array array is "<<array[Element]<<endl;
    cout<<"Element "<<Element<<" in array secondArray is "<<secondArray[Element]<<endl;
      
}
constexpr int Square (int x)
{
    return x * x;
}
void ValueInsertion()
{
    vector<int> dynArray (3);
    
    dynArray[0] = {45};
    dynArray[1] = {234};
    dynArray[2] = {9};
    
    cout<<"There are "<<dynArray.size()<<" elements in the array"<<endl;
    cout<<"Elements: ";
    
    for(int i = 0; i < 3; ++i)
    {
        cout<<dynArray[i]<<" ";
    }
    
    cout<<"Enter new element"<<endl;
    int newElement = 0;
    cin>>newElement;
    dynArray.push_back(newElement);
    
    cout<<"There are "<<dynArray.size()<<" elements in the array"<<endl;
    cout<<"Elements: ";
    
    for(int i = 0; i < 4; ++i)
    {
        cout<<dynArray[i]<<" ";
    }
    
    
}