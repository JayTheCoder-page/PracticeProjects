/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on April 24, 2020, 5:50 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

//Current Lesson from Sams Teach Yourself C++ by Siddhartha Rao
void incrDecrement(); //Increments and Decrements

//A Previous Sams Lesson
void ValueOfPi();
constexpr float GetPi(float);
constexpr float GetPiSquared(float);

//Another Previous Sams Lesson
void SizeOfVariables();

int main(int argc, char** argv) {
    
    incrDecrement();
    //ValueOfPi();
    //SizeOfVariables();

    return 0;
}
void incrDecrement()
{
    int startValue = 101;
    
    cout<<"Start value of integer being operate: "<<startValue<<endl;
    
    int postIncrement = startValue++;
    cout<<"Result of Postfix Increment: "<<postIncrement<<endl;
    cout<<"After Postfix Increment, startValue: "<<startValue<<endl;
    
    startValue = 101;
    int preIncrement = ++startValue;
    cout<<"Result of Prefix Increment: "<<preIncrement<<endl;
    cout<<"After Prefix Increment, startValue: "<<startValue<<endl;
    
    startValue = 101;
    int postDecrement = startValue--;
    cout<<"Result of Postfix Decrement: "<<postDecrement<<endl;
    cout<<"After Postfix Decrement, startValue: "<<startValue<<endl;
    
    startValue = 101;
    int preDecrement = --startValue;
    cout<<"Result of Prefix Decrement: "<<preDecrement<<endl;
    cout<<"After Prefix Decrement, startValue: "<<startValue<<endl;  
}
void ValueOfPi()
{
    float pi;
    float piSquared;
    
    cout<<"GetPi(pi) = "<<GetPi(pi)<<endl;
    cout<<"GetPiSquared(piSquared) = "<<GetPiSquared(piSquared)<<endl;
}
constexpr float GetPi(float x)
{
    return 22.0/7;
}
constexpr float GetPiSquared(float y)
{
    return (22.0/7) * (22.0/7);
}
void SizeOfVariables()
{
    cout<<"sizeof(float) = "<<sizeof(float)<<endl;
    cout<<"sizeof(bool) = "<<sizeof(bool)<<endl;
}





