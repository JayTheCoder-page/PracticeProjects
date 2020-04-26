/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on April 24, 2020, 7:51 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

//Current Lesson from Sams Teach Yourself C++ by Siddhartha Rao
void conStatement();

int main(int argc, char** argv) {
    
    conStatement();

    return 0;
}
void conStatement()
{
    cout<<"Answer the questions with a 0 (false) or 1 (true)"<<endl;
    
    cout<<"Is it raining?"<<endl;
    bool isRaining = false;
    cin>>isRaining;
    
    cout<<"Are there busses on the street?"<<endl;
    bool BussesOnS = false;
    cin>>BussesOnS;
    
    if(isRaining && !BussesOnS)
        cout<<"You cannot go to work"<<endl;
    else
        cout<<"You can go to work"<<endl;
    
    if(isRaining && BussesOnS)
        cout<<"Take an umbrella"<<endl;
    
    if((!isRaining) && BussesOnS)
        cout<<"Enjoy the sun and have a nice day!"<<endl;
}

