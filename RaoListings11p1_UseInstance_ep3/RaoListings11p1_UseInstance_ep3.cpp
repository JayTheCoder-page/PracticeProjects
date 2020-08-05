/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on August 5, 2020, 3:43 PM
 */

#include <iostream>

using namespace std;

void Invoke();
class Mouse
{
public:
    void Eat()
    {
        cout<<"Mouse eats: "<<endl;
    }
};
class DeerMouse:public Mouse
{
public:
    void Eat()
    {
        cout<<"Deer mouse eats: "<<endl;
    }
};
void MakeMouseEat(Mouse& inputM)
{
    inputM.Eat();
}
int main(int argc, char** argv) {
    
    Invoke();

    return 0;
}
void Invoke()
{
    DeerMouse speedyPest;
    
    speedyPest.Eat();
    
    MakeMouseEat(speedyPest);
}
