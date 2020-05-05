/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on May 4, 2020, 5:45 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

const float Pi = 3.14159265;

void NeedForFunctions();
float Area(float radius);
float Circumference(float radius);
void PreviousLessons();
void indexElement();
constexpr int Square(int);
void DynamicArray();

int main(int argc, char** argv) {
    
    NeedForFunctions();
    //PreviousLessons();

    return 0;
}
void NeedForFunctions()
{
    cout<<"Enter radius: ";
    float radius = 0;
    cin>>radius;
    
    cout<<"Area is: "<<Area(radius)<<endl;
    
    cout<<"Circumference is: "<<Circumference(radius)<<endl;
}
float Area(float radius)
{
    return Pi * radius * radius;
}
float Circumference(float radius)
{
    return 2 * Pi * radius;
}
void PreviousLessons()
{
    indexElement(); //Changing index of element
    cout<<endl;
    DynamicArray();
}
void indexElement()
{
    const int size = 3;
    int myNumbers[size] = {2016, 2017, 2018};
    
    int moreNumbers[Square(size)];
    
    cout<<"Enter the index of element to be changed: ";
    int indexElement = 0;
    cin>>indexElement;
    
    cout<<"Enter new value: ";
    int newValue = 0;
    cin>>newValue;
    
    myNumbers[indexElement] = newValue;
    moreNumbers[indexElement] = newValue;
    
    cout<<"Element "<<indexElement<<" of myNumbers changed to: "
        <<myNumbers[indexElement]<<endl;
    cout<<"Element "<<indexElement<<" of moreNumbers changed to: "
        <<moreNumbers[indexElement]<<endl;  
}
constexpr int Square(int x)
{
    return x * x;
}
void DynamicArray()
{
    vector<int> DynArray(4);
    
    DynArray[0] = 1;
    DynArray[1] = 911;
    DynArray[2] = 666;
    DynArray[3] = 2012;
    
    for(int i = 0; i < 5; ++i)
    {
        cout<<DynArray[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Number of elements in array: "<<DynArray.size()<<endl;
    cout<<"(The 0 is just a placeholder)"<<endl;
    
    cout<<"Enter a new element of the array"<<endl;
    int element = 0;
    cin>>element;
    DynArray.push_back(element);
    
    for(int i = 0; i < 5; ++i)
    {
        cout<<DynArray[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Number of elements in array: "<<DynArray.size()<<endl;
    cout<<"New element in array is: "<<DynArray[DynArray.size() - 1]<<endl;
}
