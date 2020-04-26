/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on April 23, 2020, 8:58 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

void Function();
//Previous Lessons from Sams Teach Yourself C++ by Siddhartha Rao
void DynamicArray();
void indexElement();
constexpr int Oval(int);

int main(int argc, char** argv) {
    
    Function();
    //DynamicArray();
    //indexElement();

    return 0;
}
void Function()
{
    cout<<"Enter two numbers: "<<endl;
    int num1 = 0, num2 = 0;
    cin>>num1;
    cin>>num2;
    
    cout<<num1<<" + "<<num2<<" = "<<num1 + num2<<endl;
    cout<<num1<<" - "<<num2<<" = "<<num1 - num2<<endl;
    cout<<num1<<" * "<<num2<<" = "<<num1 * num2<<endl;
    cout<<num1<<" / "<<num2<<" = "<<num1 / num2<<endl;
    cout<<num1<<" % "<<num2<<" = "<<num1 % num2<<endl;
}
void DynamicArray()
{
    vector<int>integer(3);
    
    integer[0] = {45};
    integer[1] = {67};
    integer[2] = {89};
    
    cout<<"The size of the array is currently "<<integer.size()<<endl;
    
    cout<<"Enter another number: "<<endl;
    int num;
    cin>>num;
    integer.push_back(num);
    
    cout<<"Now, the size of the array is "<<integer.size()<<endl;
    cout<<"The last element of the array is "<<integer[integer.size() - 1]<<endl;          
}
void indexElement()
{
    const int array = 5;
    int myNumbers[array] = {12, 34, 56, 78, 910};
    
    int moreNumbers[Oval(array)];
    
    cout<<"Enter index of element to be changed: ";
    int indexElement = 0;
    cin>>indexElement;
    
    cout<<"Enter the new value: ";
    int newValue = 0;
    cin>>newValue;
    
    myNumbers[indexElement] = newValue;
    moreNumbers[indexElement] = newValue;
    
    cout<<"Element "<<indexElement<<" in myNumbers[array] is "<<myNumbers[indexElement]<<endl;
    cout<<"Element "<<indexElement<<" in moreNumbers[array] is "<<moreNumbers[indexElement]<<endl;
}
constexpr int Oval(int number)
{
    return number * number;
}


