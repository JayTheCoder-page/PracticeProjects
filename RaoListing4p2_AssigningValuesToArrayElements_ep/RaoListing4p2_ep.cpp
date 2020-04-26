/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on April 21, 2020, 8:51 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void Function ();
constexpr int Square (int);

int main(int argc, char** argv) {
    
    Function();
    
    return 0;
}

void Function()
{
    const int array = 5;
    int MyNumbers[array] = {23, 45, 0, -54, 100};
    
    int MoreNum[Square(array)];
    
    cout<<"Enter index of the element to be changed: ";
    int indexElement = 0;
    cin>>indexElement;
    
    cout<<"Enter the new value: ";
    int newValue = 0;
    cin>>newValue;
    
    MyNumbers[indexElement] = newValue;
    MoreNum[indexElement] = newValue;
    
    cout<<"Element "<<indexElement<<" in array MyNumbers is: ";
    cout<<MyNumbers[indexElement]<<endl;
    
    cout<<"Element "<<indexElement<<" in array MyNumbers is: ";
    cout<<MoreNum[indexElement]<<endl;
}
constexpr int Square (int number)
{
    return number * number;
}

