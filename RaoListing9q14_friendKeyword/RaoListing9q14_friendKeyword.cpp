/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 14, 2020, 4:00 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void friendKeyword();
class Human
{
private:
    friend void DisplayAge(const Human& person);
    string name;
    int age;
    
public:
    Human(string humansName, int humansAge)
    {
        name = humansName;
        age = humansAge;
    }
};
void DisplayAge(const Human& person)
{
    cout<<person.age<<endl;
}

int main(int argc, char** argv) {
    
    friendKeyword(); //Using the friend keyword to allow an external function
                     //DisplayAge() Access to private data members

    return 0;
}
void friendKeyword()
{
    Human firstMan("Adam", 25);
    cout<<"Accessing private member age via friend function: ";
    DisplayAge(firstMan);
}
