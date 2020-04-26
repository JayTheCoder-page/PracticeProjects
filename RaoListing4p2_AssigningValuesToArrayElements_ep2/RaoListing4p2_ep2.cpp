/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on April 22, 2020, 8:06 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void Function();
constexpr int Circle(int);

int main(int argc, char** argv) {
    
    Function();

    return 0;
}
void Function()
{
    const int AS = 7;
    int A[AS] = {12, 54, -5, 8, -234, 50, 1};
    
    int M[Circle(AS)];
    
    cout<<"Enter index of the element to be changed: ";
    int IndxE = 0;
    cin>>IndxE;
    
    cout<<"Enter new value: ";
    int nV = 0;
    cin>>nV;
    
    A[IndxE] = nV;
    M[IndxE] = nV;
    
    cout<<"Element "<<IndxE<<" in array A is: "<<A[IndxE]<<endl;
    cout<<"Element "<<IndxE<<" in array M is: "<<M[IndxE]<<endl; 
    
}
constexpr int Circle (int number)
{
    return number * number;
}

