/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on August 18, 2020, 3:32 PM
 */

#include <iostream>

using namespace std;

void FunctionObject();
class Display
{
public:
    void operator () (string input) const
    {
        cout<<input<<endl;
    }
};

int main(int argc, char** argv) {
    
    FunctionObject();

    return 0;
}
void FunctionObject()
{
    Display displayFuncObj;
    
    //equivalent to displayFuncObj.operator () ("Display this string: ");
    displayFuncObj("Display this string! ");
}
