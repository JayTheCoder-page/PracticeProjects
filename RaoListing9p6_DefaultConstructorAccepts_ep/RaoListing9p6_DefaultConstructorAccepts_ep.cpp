/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 10, 2020, 8:24 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void ConstructorAccepts();
class Human
{
private:
    string name;
    int age;
    
public:
    
    Human(string humansName = "Adam", int humansAge = 30)
            :name(humansName), age(humansAge)
            {
                cout<<"Constructed a human called "<<name;
                cout<<", Age = "<<age<<endl;
            }
};

int main(int argc, char** argv) {
    
    ConstructorAccepts();

    return 0;
}
void ConstructorAccepts()
{
    Human adam;
    Human eve("Eve", 25);
}
