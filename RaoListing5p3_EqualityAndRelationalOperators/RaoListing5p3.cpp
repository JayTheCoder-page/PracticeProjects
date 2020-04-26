/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on April 24, 2020, 7:19 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

//Current Lesson from Sams Teach Yourself C++ by Siddhartha Rao
void Boolean();

int main(int argc, char** argv) {
    
    Boolean();
    
    return 0;
}
void Boolean()
{
    cout<<"Enter two integers: "<<endl;
    int num1, num2;
    cin>>num1;
    cin>>num2;
    
    bool isEqual (num1 == num2);
    cout<<"Result of equality test: "<<isEqual<<endl;
    
    bool isNotEqual (num1 != num2);
    cout<<"Result of inequality test: "<<isNotEqual<<endl;
    
    bool GreaterThan (num1 > num2);
    cout<<"Result of "<<num1<<" > "<<num2<<" test: "<<GreaterThan<<endl;
    
    bool LessThan (num1 < num2);
    cout<<"Result of "<<num1<<" < "<<num2<<" test: "<<LessThan<<endl;
    
    bool GreatOrEqual (num1 >= num2);
    cout<<"Result of "<<num1<<" >= "<<num2<<" test: "<<GreatOrEqual<<endl;
    
    bool LessOrEqual (num1 <= num2);
    cout<<"Result of "<<num1<<" <= "<<num2<<" test: "<<LessOrEqual<<endl;
}
