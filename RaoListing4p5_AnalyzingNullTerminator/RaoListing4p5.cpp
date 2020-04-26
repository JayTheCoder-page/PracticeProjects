/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on April 23, 2020, 4:51 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void Function();

int main(int argc, char** argv) {
    
    Function();

    return 0;
}
void Function()
{
    char sayHello[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
    cout<<sayHello<<endl;
    cout<<"The size of sayHello[] is: "<<sizeof(sayHello)<<endl; 
    
    cout<<"Now, put the null sign in the middle (replace space at position 5)"<<endl;
    sayHello[5] = '\0';
    cout<<sayHello<<endl;
    cout<<"The size of sayHello[] is: "<<sizeof(sayHello)<<endl; 
    //cout<<sayHello.size()<<endl; <-- This will NOT work, program won't build
    
}

