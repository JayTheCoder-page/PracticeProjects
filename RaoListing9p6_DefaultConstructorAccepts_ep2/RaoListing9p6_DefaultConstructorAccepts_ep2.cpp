/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 11, 2020, 11:48 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void ConstructorAccepts();
class Pet
{
private:
    string animal;
    float age;
    
public:
    Pet(string petType = "dog", float petAge = 1)
        :animal(petType), age(petAge)
        {
            cout<<"I have a pet "<<animal<<" ";
            cout<<"It is "<<age<<" years old"<<endl;
        }
};

int main(int argc, char** argv) {
    
    ConstructorAccepts();

    return 0;
}
void ConstructorAccepts()
{
    Pet firstPet;
    Pet secondPet("cat", 0.5);
}