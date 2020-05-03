/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on April 26, 2020, 6:59 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void RightLeftShift();

int main(int argc, char** argv) {
    
    RightLeftShift();

    return 0;
}
void RightLeftShift()
{
    cout<<"Enter a number: ";
    int num = 0;
    cin>>num;
    
    int quartNum = num >> 2;
    int halfNum = num >> 1;
    int doubleNum = num << 1;
    int quadrupleNum = num << 2;
    
    cout<<"Quarter: "<<quartNum<<endl;
    cout<<"Half: "<<halfNum<<endl;
    cout<<"Double: "<<doubleNum<<endl;
    cout<<"Quadruple: "<<quadrupleNum<<endl;
}

