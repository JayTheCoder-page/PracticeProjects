/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on April 23, 2020, 5:27 PM
 */

#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

void Function ();

int main(int argc, char** argv) {
    
    Function();

    return 0;
}
void Function ()
{
    cout<<"Enter a word that does not exceed 4 characters in length"<<endl;
    
    char word [5] = {'\0'};
    cin>>word;
    
    cout<<"This word is "<<strlen(word)<<" characters long"<<endl;
    cout<<"The word entered was "<<word<<endl;
}
