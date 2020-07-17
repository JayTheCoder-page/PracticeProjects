/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 16, 2020, 6:18 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void BlockImplicitC();
class Frog
{
    int age;
public:
    explicit Frog (int frogsAge) : age(frogsAge){}
};
void DoSomething(Frog Anura)
{
    cout<<"Frog sent did something"<<endl;
    return;
}
int main(int argc, char** argv) {
    
    BlockImplicitC();

    return 0;
}
void BlockImplicitC()
{
    Frog tadpole1(10);
    Frog tadpole2 = Frog(20);
    DoSomething(tadpole1);
    
    //Frog tadpole2 = 25;
    //DoSomething(30);
}
