/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on August 3, 2020, 1:22 PM
 */

#include <iostream>

using namespace std;

void VTFpointer();
class SimpleClass
{
    int a, b;
    
public:
    void DoSomething(){}
};
class Base
{
    int a, b;
    
public:
    virtual void DoSomething(){}
};
int main(int argc, char** argv) {
   
    VTFpointer();//Demonstrating the Presence Presence of a Hidden VFT Pointer
                 //in Classes Identical but for a Function Declared Virtual 
    return 0;
}
void VTFpointer()
{
    cout<<"sizeof(SimpleClass) = "<<sizeof(SimpleClass)<<endl;
    cout<<"sizeof(Base) = "<<sizeof(Base)<<endl;
    //Output: sizeof(SimpleClass) = 8
    //        sizeof(Base) = 16
    
    //Output in Book
    //Output: sizeof(SimpleClass) = 8
    //        sizeof(Base) = 12 
}
