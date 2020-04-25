/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on April 19, 2020, 6:42 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void Function(int, string);

int main(int argc, char** argv) {
    
    int intgr;
    string nme; 
    
    Function(intgr, nme);

    return 0;
}

void Function (int intgr, string nme)
{
    cout<<"Enter an integer: "<<endl;
    cin>>intgr;
    
    cout<<"Enter your name: "<<endl;
    cin>>nme;
    
    cout<<nme<<" entered "<<intgr<<endl;
}


