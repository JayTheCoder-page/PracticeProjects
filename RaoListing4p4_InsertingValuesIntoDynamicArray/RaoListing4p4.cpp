/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on April 22, 2020, 8:53 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

void Function();
void PreviousLesson();
void pLtwo ();          //previous lesson #2
void pLthree();         //previous lesson #3
constexpr int Triangle(int);
void DynArray ();

int main(int argc, char** argv) {
    
    Function();       //practice with dynamic arrays
    
    //PreviousLesson(); //practice utilizing enum 
    //pLtwo();          //practice changing elements of array
    //pLthree();        //practice creating multi-dimensional arrays
    //DynArray();       //more practice creating dynamic arrays

    return 0;
}
void Function()
{
    vector<int> dynArray (3); //dynamic array of integers
    
    dynArray[0] = 23;
    dynArray[1] = -345;
    dynArray[2] = 123;
    
    cout<<"Number of integers in array: "<<dynArray.size()<<endl;
    
    cout<<"Enter another element to insert "<<endl;
    int newValue = 0;
    cin>>newValue;
    dynArray.push_back(newValue);
    
    cout<<"Number of integers in array: "<<dynArray.size()<<endl;
    cout<<"Last element in array: "<<dynArray[dynArray.size() - 1]<<endl;
}
void PreviousLesson()
{
    enum cookies
    {
        chocolateChip = 1,
        oatmealRaisin,
        sugar,
        lemon,
        darkChocolate,
        butter
    };
    
    cout<<"The number linked to oatmealRaisin is "<<oatmealRaisin<<endl;
    cookies favorate = chocolateChip;
    cout<<"Favorite cookie is the number "<<favorate<<" cookie"<<endl;
}
void pLtwo()
{
    const int arraySize = 6;
    int array[arraySize] = {1, 2, 3, 4, 5, 6};
    
    int moreArray[Triangle(arraySize)];
    
    cout<<"Enter the indexElement to be changed: ";
    int indexElement = 0;
    cin>>indexElement;
    
    cout<<"Enter the new value: ";
    int newValue = 0;
    cin>>newValue;
    
    array[indexElement] = newValue;
    moreArray[indexElement] = newValue;
    
    cout<<"Element "<<indexElement<<" in array array is: "
        <<array[indexElement]<<endl;
    cout<<"Element "<<indexElement<<" in array moreArray is: "
        <<moreArray[indexElement]<<endl;  
}
constexpr int Triangle (int num)
{
    return num * num;
}
void pLthree()
{
    int threeDimensionalArray [3][3] =
    {{1, 2, 3}, {2012, 2011, 2010}, {911, 191, 119}};
    
    cout<<"Row 0: "<<threeDimensionalArray[0][0]<<" "
                   <<threeDimensionalArray[0][1]<<" "
                   <<threeDimensionalArray[0][2]<<" "<<endl;
}
void DynArray()
{
    vector<int> dynArray (5); 
    
    dynArray[0] = 1;
    dynArray[1] = 3;
    dynArray[2] = 6;
    dynArray[3] = 10;
    dynArray[4] = 15;
    
    cout<<"The size of the array is: "<<dynArray.size()<<endl;
    
    cout<<"Enter a new value for the array"<<endl;
    int newValue = 0;
    cin>>newValue;
    dynArray.push_back(newValue);
    
    cout<<"The new value for the array is "<<dynArray[dynArray.size() - 1]<<endl;
    cout<<"The size of the array (i.e. # of integers) is "<<dynArray.size()<<endl;
}
