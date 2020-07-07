/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 5, 2020, 5:05 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void ConstructorAccepts();
class Human
{
private:
    int age;
    string name;
    
public:
    Human(string humansName = "Adam", int humansAge = 25)
            :name(humansName), age(humansAge)
            {
                cout<<"Constructed a human called "<<name;
                cout<<", "<<age<<" years old"<<endl;
            }
};
        
int main(int argc, char** argv) {
    
    ConstructorAccepts(); //default constructor that accepts parameters with
                          //default values to set members using initialization
                          //list
    return 0;
}
void ConstructorAccepts()
{
    Human adam;
    Human eve("Eve", 18);
}

