/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on May 3, 2020, 3:10 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void WhileLoop();

int main(int argc, char** argv) {
    
    WhileLoop();

    return 0;
}
void WhileLoop()
{
    char userSelection = 'm';
    
    while(userSelection != 'x')
    {
        cout<<"Enter two integers: "<<endl;
        int num1 = 0, num2 = 0;
        cin>>num1;
        cin>>num2;
        
        cout<<num1<<" + "<<num2<<" = "<<num1 + num2<<endl;
        cout<<num1<<" x "<<num2<<" = "<<num1 * num2<<endl;
        
        cout<<"Press x to exit(x) or any other key to recalculate"<<endl;
        cin>>userSelection;
    }
    
    cout<<"Goodbye!"<<endl;
}

