/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on May 3, 2020, 12:48 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void NestedIfMultDiv();

int main(int argc, char** argv) {
    
    NestedIfMultDiv();

    return 0;
}
void NestedIfMultDiv()
{
    cout<<"Enter two numbers: ";
    int num1 = 0, num2 = 0;
    cin>>num1;
    cin>>num2;
    
    cout<<"To divide, enter 'd'. Enter anything else, and numbers will "
        <<"be multiplied"<<endl;
    char enter = '\0';
    cin>>enter;
    
    if(enter == 'd')
    {
        cout<<"You want to divide"<<endl;
        
        if(num2 != 0)
        {
            cout<<"num1/num2 = "<<num1 / num2<<endl;   
        }
        else
        {
             cout<<"ERROR: No number can be divided by 0"<<endl;
        }
    }
    else
    {
        cout<<"You want to multiply"<<endl;
        cout<<"num1 * num2 = "<<num1 * num2<<endl;
    }
}


