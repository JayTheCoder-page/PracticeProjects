/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on May 3, 2020, 2:50 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void CondOperator();

int main(int argc, char** argv) {
    
    CondOperator();

    return 0;
}
void CondOperator()
{
    cout<<"Enter two numbers: "<<endl;
    int num1 = 0, num2 = 0;
    cin>>num1;
    cin>>num2;
    
    int max = (num1 > num2) ? num1 : num2;
    cout<<"The greater of "<<num1<<" and "<<num2<<" is: "<<max<<endl;   
}

