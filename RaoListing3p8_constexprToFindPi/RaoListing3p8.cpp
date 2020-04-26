/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on April 20, 2020, 6:16 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

constexpr float GtPi ();
constexpr float TwcePi ();
const float Function (const float);

int main(int argc, char** argv) {
    
    const float pi = 22.0 / 7;
    
    Function (pi);
    
    return 0;
}

constexpr float GtPi()
{
    return 22.0 / 7;
}

constexpr float TwcePi()
{
    return 2.0 * GtPi();
}

const float Function (const float pi)
{
    cout<<"constant pi contains value "<<pi<<endl;
    cout<<"constexpr GtPi returns "<<GtPi()<<endl;
    cout<<"constexpr TwcePi returns "<<TwcePi()<<endl;
}

