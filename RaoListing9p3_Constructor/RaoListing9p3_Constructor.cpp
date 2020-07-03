/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on June 29, 2020, 1:04 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void Constructor(); //Using Constructors to Initialize Class Member Variables
class Human
{
private:
    string name;
    int age;
public:
    Human() //constructor
    {
        age = 1;
        cout<<"Constructed an instance of class Human"<<endl;
    }
    
    void SetName (string humansName)
    {
        name = humansName;
    }
    
    void SetAge(int humansAge)
    {
        age = humansAge;
    }
    
    void IntroduceSelf()
    { 
        cout<<"I am " + name <<" and am ";
        cout<<age<<" years old"<<endl;
    }
};
void PreviousLessons();
void PassingPointersToFunctions();
void CalculateArea(const float* const, 
                   const float* const,
                   float* const);
void ArrayVariablePointer();
void AccessElementInArray();
void SaferPointer();

int main(int argc, char** argv) {
    
    Constructor();
    //PreviousLessons(); //extra practice

    return 0;
}
void Constructor()
{
    Human firstWoman;
    firstWoman.SetName("Eve");
    firstWoman.SetAge(28);
    
    firstWoman.IntroduceSelf();
}
void PreviousLessons()
{
    PassingPointersToFunctions();
    //ArrayVariablePointer();
    //AccessElementInArray();
    //SaferPointer();
}
void PassingPointersToFunctions()
{
    float Pi = 3.1416;
    
    cout<<"Enter the radius: ";
    float radius = 0;
    cin>>radius;
    
    float area = 0;
    CalculateArea(&Pi, &radius, &area);
    
    cout<<"Area = "<<area<<endl;
}
void CalculateArea(const float* const ptrPi, const float* const ptrR, float* const ptrArea)
{
    if(ptrArea && ptrPi && ptrR)
    {
        *ptrArea = (*ptrR) * (*ptrR) * (*ptrPi);
    }
}
void ArrayVariablePointer()
{
    int myNum[4];
    
    int* pointsToInt = myNum;
    
    cout<<"pointsToInt = "<<hex<<pointsToInt<<endl;
    
    cout<<"&myNum[0] = "<<hex<<&myNum[0]<<endl;
}
void AccessElementInArray()
{
    const int size = 5;
    
    int array[size] = {1, -2, 3, -4, 5};
    
    int* pointsToArray = array;
    
    cout<<"Display array (pointer syntax), operator*"<<endl;
    for(int index = 0; index < size; ++index)
    {
        cout<<"Element "<<index<<" = ";
        cout<<*(array + index)<<endl;
    }
    
    cout<<"Display array (array syntax), operator[]"<<endl;
    for(int index = 0; index < size; ++index)
    {
        cout<<"Element "<<index<<" = "<<pointsToArray[index];
        cout<<" "<<endl;
    }
}
void SaferPointer()
{
    cout<<"Is it sunny (y/n)"<<endl;
    char userInput = 'n';
    cin>>userInput;
    
    bool* const isSunny = new bool;
    *isSunny = true;
    
    if(userInput == 'n')
    {
        *isSunny = false;
    }
    
    cout<<"Boolean flag isSunny says: "<<*isSunny<<endl;
    
    delete isSunny;
}
