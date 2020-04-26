/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on April 23, 2020, 5:49 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void Function();

int main(int argc, char** argv) {
    
    Function();

    return 0;
}
void Function ()
{
    string greetString ("Hello guys");
    cout<<greetString<<endl;
    
    cout<<"Enter a line of text: "<<endl;
    string firstLine;
    getline(cin, firstLine);
    
    cout<<"Enter another: "<<endl;
    string secondLine;
    getline(cin, secondLine);
    
    cout<<"Result of concatenation: "<<endl;
    string concatString = firstLine + " " + secondLine;
    cout<<concatString<<endl;
    
    cout<<"Copy concatenated string: "<<endl;
    string aCopy;
    aCopy = concatString;
    cout<<aCopy<<endl;
    
    cout<<"Length of concat string: "<<concatString.length()<<endl;
}

