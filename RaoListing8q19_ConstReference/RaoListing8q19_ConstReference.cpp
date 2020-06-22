/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on June 22, 2020, 1:48 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void ConstReference();
void GetSquare(const int&, int&);

int main(int argc, char** argv) {
    
    ConstReference();

    return 0;
}
void ConstReference()
{
    cout<<"Enter a number you wish to square: ";
    int number = 0;
    cin>>number;
    
    int square = 0;
    GetSquare(number, square);
    cout<<number<<"^2 = "<<square<<endl;
}
void GetSquare(const int& number, int& result)
{
    result = number*number;
}