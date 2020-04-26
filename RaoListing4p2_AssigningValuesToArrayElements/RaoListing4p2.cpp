/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on April 21, 2020, 7:58 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void Function();
constexpr int Square (int);

int main(int argc, char** argv) {
    
    Function();
    
    return 0;
}
void Function()
{
    const int arryL = 5;
    int MyNumbers [arryL] = {5, 10, 0, -101, 20};
    
    int moreNumbers [Square(arryL)];
    
    cout<<"Enter index of the element to be changed: ";
    int elementIndex = 0;
    cin>>elementIndex;
    
    cout<<"Enter new value: ";
    int newValue = 0;
    cin>>newValue;   
    
    MyNumbers[elementIndex] = newValue;
    moreNumbers[elementIndex] = newValue;
    
    cout<<"Element "<<elementIndex<<" in array myNumbers is: ";
    cout<<MyNumbers[elementIndex]<<endl;
    
    cout<<"Element "<<elementIndex<<" in array moreNumber is: ";
    cout<<moreNumbers[elementIndex]<<endl;
}
constexpr int Square (int number)
{
    return number * number;
}


