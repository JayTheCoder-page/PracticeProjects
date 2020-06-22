/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on June 19, 2020, 2:02 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

const float pi = 3.1416f;

void Offset(); //Using Offset Values and Operators to Increment and Decrement Pointers 
void PreviousLessons();
void WhileLoop();
void NestedLoop();
void PassByReference();
void Area(float, float&);
void ConditionalOperator();
void PassingArrayAsFunction();
void DisplayArray(int[], int);
void DisplayArray(char[], int);

int main(int argc, char** argv) {
    
    Offset();
    //PreviousLessons(); //extra practice

    return 0;
}
void Offset()
{
    cout<<"How many integers to you wish to enter?"<<endl;
    int numEntries = 0;
    cin>>numEntries;
    
    int* pointsToInts = new int [numEntries];
    
    cout<<"Allocated for "<<numEntries<<" integers"<<endl;
    for(int counter = 0; counter < numEntries; ++counter)
    {
        cout<<"Enter number "<<counter<<": ";
        cin>>*(pointsToInts + counter);
    }
    
    cout<<"Displaying alll numbers entered: "<<endl;
    for(int counter = 0; counter < numEntries; ++counter)
    {
        cout<<*(pointsToInts + counter)<<" ";
    }
    
    cout<<endl;
    
    //return pointer to initial position
    pointsToInts -= numEntries;
    
    //done using memory release
    delete[] pointsToInts;
}
void PreviousLessons()
{
    WhileLoop();
    //NestedLoop();
    //PassByReference();
    //ConditionalOperator();
    //PassingArrayAsFunction();
}
void WhileLoop()
{
    char UserSelection = 'x';
    
    while(UserSelection == 'x')
    {
        cout<<"Input two numbers to be added and multiplied together"<<endl;
        int num1 = 0,
            num2 = 0;
        cin>>num1;
        cin>>num2;
        
        cout<<num1<<" + "<<num2<<" = "<<num1 + num2<<endl;
        cout<<num1<<" x "<<num2<<" = "<<num1 * num2<<endl;
        
        cout<<"To calculate the sum and product of two new integers, enter 'x'. ";
        cout<<"Otherwise, enter any other key"<<endl;
        
        cin>>UserSelection;
    }
}
void NestedLoop()
{
    const int size1 = 3;
    const int size2 = 4;
    
    int array1[size1] = {2, 4, 6};
    int array2[size2] = {30, 50, 70, 90};
    
    for(int i = 0; i < size1; ++i)
    {
        for(int j = 0; j < size2; ++j)
        {
            cout<<array1[i]<<" x "<<array2[j]<<" = "
                <<array1[i] * array2[j]<<endl;
        }
    } 
}
void PassByReference()
{
    cout<<"Enter the radius"<<endl;
    float radius = 0;
    cin>>radius;
    
    float areaFetched = 0;
    Area(radius, areaFetched);
    
    cout<<"The area: "<<areaFetched<<endl;   
}
void Area(float radius, float& result)
{
    result = pi * radius * radius;
}
void ConditionalOperator()
{
    cout<<"Enter two numbers"<<endl;
    int num1 = 0, num2 = 0;
    cin>>num1>>num2;
    
    int max = 0;
    
    max = (num1 > num2) ? num1 : num2;
    
    cout<<"Max: "<<max<<endl;
}
void PassingArrayAsFunction()
{
    const int sizeI = 5;
    int firstA[sizeI] = {1, 2, 3, 4, 5};
    DisplayArray(firstA, 5);
    
    char secondA[] = {'A', 'B', 'C', 'D', 'E', '\0'};
    DisplayArray(secondA, 6);
}
void DisplayArray(int array[], int size)
{
    for(int i = 0; i < size; ++i)
    {
        cout<<array[i]<<" ";
    }
    
    cout<<endl;
}
void DisplayArray(char array[], int size)
{
    for(int i = 0; i < size; ++i)
    {
        cout<<array[i]<<" ";
    }
    
    cout<<endl;
}

