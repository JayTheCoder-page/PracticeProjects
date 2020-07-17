/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 16, 2020, 5:28 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void BlockImplicit();
class Person
{
    int height;
public:
    explicit Person(int personsHeight) : height(personsHeight){}
};
void DoSomething(Person human)
{
    cout<<"Persons sent did something"<<endl;
    return;
}

int main(int argc, char** argv) {
    
    BlockImplicit();

    return 0;
}
void BlockImplicit()
{
    Person person1(2);
    Person anotherP = Person(10);
    DoSomething(person1);
    
    //Person anotherP2 = 7;
    //DoSomething(9);  
}
