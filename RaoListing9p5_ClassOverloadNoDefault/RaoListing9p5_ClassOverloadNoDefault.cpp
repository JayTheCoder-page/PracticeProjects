/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 4, 2020, 5:04 PM
 */

#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

const float pi = 3.1416;

void Class(); //Class with Overload Constructor(s) and No Default Constructor
class Human
{
private:
    string name;
    int age;
    
public:
    Human(string humansName, int humansAge)
    {
        name = humansName;
        age = humansAge;
        cout<<"Overloaded constructor creates "<<name;
        cout<<" of age "<<age<<endl;
    }
    
    void IntroduceSelf()
    {
        cout<<"I am " + name <<" and am ";
        cout<<age<<" years old "<<endl;
    }
};
void PreviousLessons();
void PassByReference();
void Area(float, float&);
void Null();

int main(int argc, char** argv) {
    
    Class();
    //PreviousLessons(); //extra practice

    return 0;
}
void Class()
{
    Human firstMan("Adam", 25);
    Human firstWoman("Eve", 28);
    
    firstMan.IntroduceSelf();
    firstWoman.IntroduceSelf();
}
void PreviousLessons()
{
    PassByReference();
    //Null();
}
void PassByReference()
{
    cout<<"Enter radius of circle: ";
    float radius = 0;
    cin>>radius;
    
    float areaFetched = 0;
    Area(radius, areaFetched);
    
    cout<<"The area of the circle = "<<areaFetched<<endl;
}
void Area (float radius, float& result)
{
    result = radius * radius * pi;
}
void Null()
{
    char array[] = {'A', ' ', 'f', 'o', 'x', ' ', 'e', 'a', 't','s', ' ', 
                    'g', 'r', 'a', 'p', 'e', 's', '.', '\0'};
    
    for(int i = 0; i < 19; ++i)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    
    cout<<"strlen(): "<<strlen(array)<<endl;
    cout<<"sizeof(): "<<sizeof(array)<<endl;
    
    cout<<endl;
    
    array[5] = {'\0'};
    
    for(int i = 0; i < 19; ++i)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    
    cout<<"strlen(): "<<strlen(array)<<endl;
    cout<<"sizeof(): "<<sizeof(array)<<endl;  
}
