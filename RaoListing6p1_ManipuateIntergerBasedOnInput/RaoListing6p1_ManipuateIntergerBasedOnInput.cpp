/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on May 2, 2020, 6:44 PM
 */

#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

void IntManipulation();
void PreviousLessons();
void Null();
void String();

int main(int argc, char** argv) {
    
    IntManipulation(); //Manipulation of integers on the basis of input
    //PreviousLessons();

    return 0;
}
void IntManipulation()
{
    cout<<"Enter two integers: "<<endl;
    int num1 = 0, num2 = 0;
    cin>>num1;
    cin>>num2;
    
    cout<<"Enter 'm' to multiply, anything else to add: "<<endl;
    char userSelection = '\0';
    cin>>userSelection;
    
    int result = 0;
    
    if (userSelection == 'm')
    {
        result = num1 * num2;
    }
    else
    {
        result = num1 + num2;
    }
    
    cout<<"The result is: "<<result<<endl; 
}
void PreviousLessons()
{
    Null();
    cout<<endl;
    String();
}
void Null()
{
    char array[] = {'T', 'h', 'e', ' ', 'f', 'o', 'x', ' ', 'j', 'u', 'm', 'p', 'e', 'd', '\0'};
    cout<<"Array: ";
    cout<<array<<endl;
    cout<<"sizeof(array) is "<<sizeof(array)<<endl;
    cout<<"strlen(array) is "<<strlen(array)<<endl;
  
    
    cout<<"Changed sizeof(array) by inserting a null character"<<endl;
    cout<<"Enter 's' to insert the null to position 3, else null will "
        <<"be inserted to position 7"<<endl;
    
    char change = '\0';
    cin>>change;
    
    if(change == 's')
    {
        array[3] = {'\0'};
    }
    else
    {
        array[7] = {'\0'};
    }
    
    cout<<"Array: "
        <<array<<endl;
    cout<<"sizeof(array) is "<<sizeof(array)<<endl;
    cout<<"strlen(array) is "<<strlen(array)<<endl;
}
void String()
{
    cout<<"Enter the first part of a sentence: ";
    string part1;
  //cin>>part1 <-------- This turns out to be ineffienct for this type of code
    getline(cin, part1);
    
    cout<<"Enter the second part of the sentence: ";
    string part2;
    getline(cin, part2);
    
    string combined = part1 + " " + part2;
    cout<<combined<<endl;  
    
    //This type of code will NOT work properly if cin>>part1 and cin>>part2 are used
    //Instead, utilize the getline function as shown above
    //Try to memorize what will happen if you use the regular cin>> code
    
    cout<<"combined.length() = "<<combined.length()<<endl;
}



