/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on June 22, 2020, 1:04 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void CalculateSquare(); //Calculate square returned in parameter by reference
void GetSquare(int&);

int main(int argc, char** argv) {
    
    CalculateSquare();

    return 0;
}
void CalculateSquare()
{
    cout<<"Enter a number you wish to square: ";
    int number =  0;
    cin>>number;
    
    GetSquare(number);
    cout<<"Square is: "<<number<<endl;
}
void GetSquare(int& number)
{
    number *= number;
}
