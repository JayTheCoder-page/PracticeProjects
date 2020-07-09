/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 8, 2020, 3:05 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void MultipleConstructors();
class Human
{
private:
    string name;
    int age;
     
public:
    Human()
    {
        age = 0;
        //default constructor
        //cout<<"Default constructor: name and age not set"<<endl;
    }
    
    Human(string humansName, int humansAge)
    {
        name = humansName;
        age = humansAge;
        
        cout<<"This is "<<name<<"."
            <<" "<<name<<" is "<<age<<" years old"
            <<endl;
    }
};

int main(int argc, char** argv) {
    
     MultipleConstructors();

    return 0;
}
void MultipleConstructors()
{
    Human firstMan;
    Human firstWoman("Eve", 35);
}
