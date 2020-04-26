/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on April 20, 2020, 5:16 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void Function ();

int main(int argc, char** argv) {
    
    Function ();

    return 0;
}

void Function ()
{
    cout<<"Computing the size of some C++ inbuilt variable types"<<endl;
    cout<<"Size of bool: "<<sizeof(bool)<<endl;
    cout<<"Size of char: "<<sizeof(char)<<endl;
    cout<<"Size of unsigned shaort int: "<<sizeof(unsigned short int)<<endl;
    cout<<"The output changes with the compiler, hardware and OS"<<endl;
}

