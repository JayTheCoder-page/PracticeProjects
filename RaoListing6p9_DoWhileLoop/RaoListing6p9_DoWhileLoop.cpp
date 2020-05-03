/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on May 3, 2020, 3:37 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void DoWhile();

int main(int argc, char** argv) {
    
    DoWhile();
    
    return 0;
}
void DoWhile()
{
    char userSelection = 'm';
    
    do
    {
        cout<<"Enter two integers: "<<endl;
        float num1 = 0, num2 = 0;
        cin>>num1;
        cin>>num2;

        cout<<num1<<" - "<<num2<<" = "<<num1 - num2<<endl;
        cout<<num1<<" / "<<num2<<" = "<<num1 / num2<<endl;

        cout<<"Enter x to exit(x) program, else enter any other key to recalculate"<<endl;
        cin>>userSelection;
    }while(userSelection != 'x');  
}

