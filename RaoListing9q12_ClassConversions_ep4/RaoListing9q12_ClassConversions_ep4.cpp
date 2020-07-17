/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 17, 2020, 1:58 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void BlockImplicit();
class Sheep
{
    int numberInHerd;
public:
    explicit Sheep(int amount) : numberInHerd(amount){}
};
void DoSomething(Sheep OvisAries)
{
    cout<<"Sheep sent did something"<<endl;
    return;
}
int main(int argc, char** argv) {
    
    BlockImplicit();

    return 0;
}
void BlockImplicit()
{
    Sheep lambs(20);
    Sheep lambsGroup2 = Sheep(300);
    DoSomething(lambs);
    
    //Sheep lambsGroup2 = 45;
    //DoSomething(2);
}
