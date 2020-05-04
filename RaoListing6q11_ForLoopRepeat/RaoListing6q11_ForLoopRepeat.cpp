/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on May 4, 2020, 12:40 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void Loop();

int main(int argc, char** argv) {
    
    Loop();
    
    return 0;
}
void Loop()
{
    for(char userSelection = 'm'; (userSelection != 'x');)
    {
        cout<<"Enter two numbers: "<<endl;
        int num1 = 0, num2 = 0;
        cin>>num1;
        cin>>num2;
        
        cout<<num1<<" + "<<num2<<" = "<<num1 + num2<<endl;
        cout<<num1<<" x "<<num2<<" = "<<num1 * num2<<endl;
        
        cout<<"Enter x to exit. Else, press any other key to recalculate"<<endl;
        cin>>userSelection;
    }
}

