/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on April 21, 2020, 7:17 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void Function();
void PreLesson(); //Previous Lesson
void AnotherP(); //Another previous lesson
const float Pi();
const float FvePi(); //pi times 5

int main(int argc, char** argv) {
    
    Function();
    //PreLesson();
    //AnotherP();

    return 0;
}
void Function ()
{
    const int num = 5;
    int theNumbers[num] = {34, 56, -21, 5002, 365};
    
    cout<<"First element at index 0: "<<theNumbers[0]<<endl;
    cout<<"Second element at index 1: "<<theNumbers[1]<<endl;
}
void PreLesson()
{
    enum clrsRnB //colors of the rainbow
    {
        red = 10,
        orange,
        yellow,
        green, 
        blue,
        indigo,
        violet
    };
    
    cout<<"The color red corresponds to "<<red<<endl;
    cout<<"The color blue corresponds to "<<blue<<endl;
    cout<<"The color green corresponds to "<<green<<endl;
    clrsRnB pckdC = indigo;
    cout<<"The number of the color picked is "<<pckdC<<endl;
}
void AnotherP()
{
    const float pi = 22.0f/7;
    cout<<"const float pi will give the value of "<<pi<<endl;
    cout<<"const float Pi()(function) will give value of ";
    cout<<Pi()<<endl;
    cout<<"const float FvePi()(function) will give you "<<FvePi()<<endl;
}
const float Pi()
{
    return 22.0/7;
}
const float FvePi()
{
    return Pi() * 5;
}
