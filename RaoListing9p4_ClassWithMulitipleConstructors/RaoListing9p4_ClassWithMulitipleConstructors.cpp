/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 2, 2020, 12:31 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void MultipleConstructors();
class Human
{
private:
    string name;
    int age;
    
public:
    Human() //default constructor
    {
        age = 0; //initialized to ensure no junk value
        cout<<"Default constructor: name and age not set"<<endl;
    }
    Human(string humansName, int humansAge)
    {
        name = humansName;
        age = humansAge;
        cout<<"Overloaded constructor creates ";
        cout<<name<<" of "<<age<<" years"<<endl;
    }
};
void PreviousLessons();
void GracefulExit();
void NewNothrow();
void Reference(); //ReferenceAliasesForAssignedValue
void CalculationViaReference();
void GetSquare(int&);
void ConstantReference();
void GetSquare2(const int&, int&);

int main(int argc, char** argv) {
    
    MultipleConstructors();
    //PreviousLessons();

    return 0;
}
void MultipleConstructors()
{
    Human firstMan; //use default constructor
    Human firstWoman ("Eve", 20); //use overload constructor 
}
void PreviousLessons()
{
    GracefulExit();
    //NewNothrow();
    //Reference();
    //CalculationViaReference();
    //ConstantReference();
    
}
void GracefulExit()
{
    try
    {
        int* pointsToManyNums = new int[0x1fffffff];
        delete[] pointsToManyNums;
    }
    catch(bad_alloc)
    {
        cout<<"Memory allocation fail. Program ending."<<endl;
    }
}
void NewNothrow()
{
    int* pointsToManyNums = new(nothrow) int[0x1fffffff];
    
    if(pointsToManyNums)
    {
        delete[]pointsToManyNums;
    }
    else
    {
        cout<<"Memory allocation fail. Program ending"<<endl;
    }
}
void Reference()
{
    int original = 30;
    cout<<"original = "<<original<<endl;
    cout<<"original is at address: "<<hex<<&original<<endl;
    
    int& ref1 = original;
    cout<<"ref1 at address"<<hex<<&ref1<<endl;
    
    int& ref2 = ref1;
    cout<<"ref2 at address "<<hex<<&ref2<<endl;
    cout<<"Therefore ref2 = "<<dec<<ref2<<endl;
}
void CalculationViaReference()
{
    cout<<"Enter a number"<<endl;
    int number = 0;
    cin>>number;
    
    GetSquare(number);
    cout<<"Number squared = "<<number<<endl;
}
void GetSquare(int& number)
{
    number *= number;
}
void ConstantReference()
{
    cout<<"Enter a number you wish to square: ";
    int num = 0;
    cin>>num;
    
    int square = 0;
    GetSquare2(num, square);
    
    cout<<num<<"^2 = "<<square<<endl;
}
void GetSquare2(const int& number, int& result)
{
    result = number * number;
}