/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on April 20, 2020, 6:36 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

constexpr int GtSoLgt(); //Get speed of light divided by 2
int Spd (int); //Output results

int main(int argc, char** argv) {
    
    int spdLght = 299792458; //miles per second
    
    Spd (spdLght);

    return 0;
}

constexpr int GtSoLgt()
{
    return 299792458/2;
}

int Spd (int spdLght)
{
    cout<<"The speed of light is "<<spdLght<<endl;
    cout<<"The speed of light divided by two is "<<GtSoLgt()<<endl;
}

