/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 15, 2020, 2:41 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void Union();
union SimpleUnion
{
    int num;
    char alphabet;
};

struct ComplexType
{
    enum DataType
    {
        Int,
        Char,
    } Type;
    
    union Value
    {
        int num;
        char alphabet;
        
        Value(){}
        ~Value(){}  
    }value;
};

void DisplayComplexType(const ComplexType& obj)
{
    switch(obj.Type)
    {
        case ComplexType::Int:
            cout<<"Union contains number: "<<obj.value.num<<endl;
            break;
            
        case ComplexType::Char:
            cout<<"Union contains character: "<<obj.value.alphabet<<endl;
            break;
    }
}

int main(int argc, char** argv) {
    
    Union();

    return 0;
}
void Union()
{
    SimpleUnion u1, u2;
    u1.num = 2020;
    u2.alphabet = 'C';
    cout<<"sizeof(u1) containing integer: "<<sizeof(u1)<<endl;
    cout<<"sizeof(u2) containing integer: "<<sizeof(u2)<<endl;
    
    ComplexType myData1, myData2;
    myData1.Type = ComplexType::Int;
    myData1.value.num = 2017;
    
    myData2.Type = ComplexType::Char;
    myData2.value.alphabet = 'X';
    
    DisplayComplexType(myData1);
    DisplayComplexType(myData2);
}