/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on April 19, 2020, 7:14 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void Function (int, int, int);

int main(int argc, char** argv) {
    
    int frstNm, scndNm, prdct;
    
    Function (frstNm, scndNm, prdct);
    
    return 0;
}

void Function (int frstNm, int scndNm, int prdct)
{
    cout<<"This program will help you multiply two numbers"<<endl;
    cout<<"Enter the first number: ";
    frstNm = 0;
    cin>>frstNm;
    cout<<"Enter the second number: ";
    scndNm = 0;
    cin>>scndNm;
    prdct = frstNm * scndNm;
    cout<<frstNm<<" x "<<scndNm<<" = "<<prdct<<endl;
}

