/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on April 25, 2020, 7:47 PM
 */

#include <cstdlib>
#include <iostream>
#include <bitset>
#include <vector>

using namespace std;

void Bitwise();
//Previous Sams C++ Lessons (by Rao)
void preVsPost();
void indexElement();
constexpr int Square(int);
void dynamicArray();

int main(int argc, char** argv) {
    
    Bitwise();
    //preVsPost(); //Prefix Increment vs Postfix Increment
    //indexElement();
    //dynamicArray();
    
    return 0;
}
void Bitwise()
{
    cout<<"Enter a number (0 - 255): ";
    unsigned short inputNum = 0;
    cin>>inputNum;
    
    bitset<8> inputBits (inputNum);
    cout<<inputNum<<" in binary is "<<inputBits<<endl;
    
    bitset<8> bitwiseNOT = (~inputNum);
    cout<<"Logical NOT ~"<<endl;
    cout<<"~"<<inputBits<<"="<<bitwiseNOT<<endl;
    
    cout<<"Logical AND, & with 00001111"<<endl;
    bitset<8> bitwiseAND = (0x0F & inputNum); //0x0F is hex for 0001111
    cout<<"00001111 | "<<inputBits<<"="<<bitwiseAND<<endl;
    
    cout<<"Logical OR, & with 00001111"<<endl;
    bitset<8> bitwiseOR = (0x0F | inputNum); 
    cout<<"00001111 | "<<inputBits<<"="<<bitwiseOR<<endl;
    
    cout<<"Logical XOR, & with 00001111"<<endl;
    bitset<8> bitwiseXOR = (0x0F ^ inputNum); 
    cout<<"00001111 | "<<inputBits<<"="<<bitwiseXOR<<endl;
}
void preVsPost()
{
    int num  = 1,
        num2 = num++;
        
    cout<<"6 + "<<num2<<" = "<<6 + num2<<endl;
    
    num = 1;
    int num3 = ++num;
    
    cout<<"6 + "<<num3<<" = "<<6 + num3<<endl; 
}
void indexElement()
{
    const int array = 3;
    int myNumbers[array] = {1, 2, 3};
    
    int moreNumbers[Square(array)];
    
    cout<<"Enter the element of index to be changed: ";
    int indexElement = 0;
    cin>>indexElement;
    
    cout<<"Enter the new value: ";
    int newValue = 0;
    cin>>newValue;
    
    myNumbers[indexElement] = newValue;
    moreNumbers[indexElement] = newValue;
    
    cout<<"Element "<<indexElement<<" in array myNumners has been changed to "
                                  <<myNumbers[indexElement]<<endl;
    
    cout<<"Element "<<indexElement<<" in array moreNumners has been changed to "
                                  <<moreNumbers[indexElement]<<endl;
}
constexpr int Square(int x)
{
    return x * x;
}
void dynamicArray()
{
    vector<int> dynArray (5);
    
    dynArray[0] = {1984};
    dynArray[1] = {1999};
    dynArray[2] = {2001};
    dynArray[3] = {2006};
    dynArray[4] = {2012};
    
    cout<<"The size of dynArray is "<<dynArray.size()<<endl;
    
    cout<<"Enter a new integer into the array"<<endl;
    int integer = 0;
    cin>>integer;
    dynArray.push_back(integer);
    
    cout<<"The size of dynArray is "<<dynArray.size()<<endl;
    cout<<"The new element of the array is "<<dynArray[dynArray.size() - 1 ]<<endl;
}