/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on April 20, 2020, 6:52 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

enum crdDrct //Cardinal Direction
{
    North = 25,
    South,
    East,
    West
};

void Function();

int main(int argc, char** argv) {
    
    Function();
 
    return 0;
}
void Function ()
{
    cout<<"North: "<<North<<endl;
    cout<<"South: "<<South<<endl;
    cout<<"East: "<<East<<endl;
    cout<<"West: "<<West<<endl;
    crdDrct wndDrct = South;
    cout<<"Variable wndDrct = "<<wndDrct<<endl;
}

