/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 18, 2020, 2:21 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void constexprClassHuman();
class Human
{
    int age;
public:
    constexpr Human(int humansAge) :age(humansAge){}
    constexpr int GetAge() const {return age;}
};

int main(int argc, char** argv) {
    
    constexprClassHuman();

    return 0;
}
void constexprClassHuman()
{
    constexpr Human somePerson(15);
    const int hisAge = somePerson.GetAge();
    
    Human anotherPerson(45); //not constant expression
}