/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on April 19, 2020, 6:23 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int Demo ();

int main(int argc, char** argv) {
    
    Demo();
    

    return 0;
}

int Demo ()
{
    cout<<"This is a string literal"<<endl;
    cout<<"Writing the number five:"<<5<<endl;
    cout<<"Performing division"<<10 / 5<<endl;
    cout<<"Pi when approximated is "<<22 / 7<<endl;
    cout<<"Pi is "<<22.0 / 7.0<<endl;
}

