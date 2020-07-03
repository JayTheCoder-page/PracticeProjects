/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on June 27, 2020, 1:03 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void ClassHuman();
class Human
{
public:
    string name;
    int age;
    
    void IntroduceSelf()
    {
        cout<<"I am " + name <<" and am ";
        cout<<age<<" years old"<<endl;
    }
};
void PreviousLessons();
void DeterminingAddresses();
void Pointer();
void PointerReassignment();
void Dereference();

int main(int argc, char** argv) {
    
    ClassHuman();
    //PreviousLessons(); //extra practice

    return 0;
}
void ClassHuman()
{
    //An object of class Human with attribute name as "Adam"
    Human firstMan;
    firstMan.name = "Adam";
    firstMan.age = 30;
    
    //An object of class Human with attribute as "Eve"
    Human firstWoman;
    firstWoman.name = "Eve";
    firstWoman.age = 28;
    
    firstMan.IntroduceSelf();
    firstWoman.IntroduceSelf();
}
void PreviousLessons()
{
   DeterminingAddresses(); 
   //Pointer();
   //PointerReassignment();
   //Dereference();
}
void DeterminingAddresses()
{
    int age = 100;
    const float gravConstant = 6.67408e-11; //gravitational constant m^3 kg^(-1) s^(-2)
    
    cout<<"int age located at address: "<<&age<<endl;
    cout<<"const float gravConstant located at address: ";
    cout<<&gravConstant<<endl;
}
void Pointer()
{
    int height = 68; //68 inches
    int *pointsToHeight = &height;
    
    cout<<"height is located at address: "<<pointsToHeight<<endl;
    //Note to self: use pointsToHeight, NOT *pointsToHeight for above cout 
    //statement
}
void PointerReassignment()
{
    float salary = 30.00f; //$30/hour
    float *pointsToFloat = &salary;
    
    cout<<"float salary address: "<<hex<<pointsToFloat<<endl;
    cout<<"float salary address (no hex): "<<pointsToFloat<<endl;
    
    cout<<"pointsTofloat reassignment"<<endl;
    
    float width = 23.56f;
    pointsToFloat = &width;
    
    cout<<"float width address: "<<hex<<pointsToFloat<<endl;
}
void Dereference()
{
    int myWeight = 153; //153 pounds
    int fishWeight = 1; //1 pound
    
    int* pointsToInt = &myWeight;
    
    cout<<"pointsToInt points to myWeight"<<endl;
    
    cout<<"pointsToInt = "<<hex<<pointsToInt<<endl;
    cout<<"pointsToInt = "<<dec<<*pointsToInt<<endl;
    //dec is needed; w/o it, 99 will print out, NOT 153
}