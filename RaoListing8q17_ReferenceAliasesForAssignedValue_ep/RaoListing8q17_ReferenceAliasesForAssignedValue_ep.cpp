/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 10, 2020, 6:25 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void ReferenceAliases();
void CalcByReference();
void GetSquare(int&);
void ConstantReference();
void GetCube(const float&, float&);

int main(int argc, char** argv) {
    
    ReferenceAliases(); //Lesson 8.17 (Project Title)
    //CalcByReference();  //Lesson 8.18
    //ConstantReference();//Lesson 8.19

    return 0;
}
void ReferenceAliases()
{
    float daysInYear = 365.2422;
    cout<<"daysInYear = "<<dec<<daysInYear<<endl;
    cout<<"daysInYear stored in address: "<<hex<<&daysInYear<<endl;
    
    float& ref1 = daysInYear;
    cout<<"ref1 = "<<dec<<ref1<<endl;
    cout<<"ref1 stored in address: "<<hex<<&ref1<<endl;
    
    float& ref2 = ref1;
    cout<<"ref2 = "<<dec<<ref2<<endl;
    cout<<"ref2 stored in address: "<<hex<<&ref2<<endl;  
}
void  CalcByReference()
{
    cout<<"Enter an integer: ";
    int integer = 0;
    cin>>integer;
   
    GetSquare(integer);
    cout<<"Square = "<<integer<<endl;
}
void GetSquare(int& number)
{
    number *= number;
}
void ConstantReference()
{
    cout<<"Enter a number to be cubed: ";
    float num = 0;
    cin>>num;
    
    float cube = 0;
    GetCube(num, cube);
    cout<<num<<"^3 = "<<cube<<endl;
}
void GetCube(const float& number, float& cube)
{
    cube = number * number * number;
}