/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on April 22, 2020, 8:36 PM
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
    int threeRowsThreeColumns [3][3] = 
    {{2015, 2016, 2017}, {911, 411, 666},{7, 13, 100}};
    
    cout<<"Row 0: "<<threeRowsThreeColumns [0][0]<<" "
                   <<threeRowsThreeColumns [0][1]<<" "
                   <<threeRowsThreeColumns [0][2]<<" "<<endl;
    cout<<"Row 1: "<<threeRowsThreeColumns [1][0]<<" "
                   <<threeRowsThreeColumns [1][1]<<" "
                   <<threeRowsThreeColumns [1][2]<<" "<<endl;
    cout<<"Row 2: "<<threeRowsThreeColumns [2][0]<<" "
                   <<threeRowsThreeColumns [2][1]<<" "
                   <<threeRowsThreeColumns [2][2]<<" "<<endl;
}

