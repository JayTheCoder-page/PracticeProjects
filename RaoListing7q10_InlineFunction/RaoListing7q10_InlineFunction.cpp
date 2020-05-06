/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on May 5, 2020, 2:57 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void UsingInline();
inline long DoubleNum(int);

int main(int argc, char** argv) {
    
    UsingInline(); //incline --> increases execution of code
                   //BUT...
                   //"Using the incline keyword should be kept to a minimum
                   //and reserved for only those functions that do very little
                   //and need to do it with very minimum overhead" - Siddhardtha Rao,
                   //SAMS Teach Yourself C++ in ONE Hour (8th Ed), pg 171

    return 0;
}
void UsingInline()
{
    cout<<"Enter an integer: ";
    int inputNum = 0;
    cin>>inputNum;
    
    //Call incline function
    cout<<"Double is: "<<DoubleNum(inputNum)<<endl;
}
inline long DoubleNum(int inputNum)
{
    return inputNum * 2;
}
