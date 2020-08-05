/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on August 5, 2020, 3:30 PM
 */

#include <iostream>

using namespace std;

void Invoke();
class Bird
{
public:
    void Fly()
    {
        cout<<"Bird flies: "<<endl;
    }
};
class Crow:public Bird
{
public:
    void Fly()
    {
        cout<<"Crow flies: "<<endl;
    }
};
void MakeBirdFly(Bird& inputB)
{
    inputB.Fly();
}
int main(int argc, char** argv) {
    
    Invoke();

    return 0;
}
void Invoke()
{
    Crow mySmartPet;
    
    mySmartPet.Fly();
    
    MakeBirdFly(mySmartPet);  
}
