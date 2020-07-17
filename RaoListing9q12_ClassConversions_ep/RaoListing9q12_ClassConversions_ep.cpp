/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 16, 2020, 5:11 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void Conversion();
class Human
{
    int age;
public:
    explicit Human(int humansAge) : age (humansAge){}
};
void DoSomething (Human person)
{
    cout<<"Human sent did something"<<endl;
    return;
}

int main(int argc, char** argv) {
    
    Conversion();

    return 0;
}
void Conversion()
{
    Human kid(10);
    Human anotherKid = Human(11);
    DoSomething(kid);
    
    //Human anotherKid2 = 12
    //DoSomething(10);
}
