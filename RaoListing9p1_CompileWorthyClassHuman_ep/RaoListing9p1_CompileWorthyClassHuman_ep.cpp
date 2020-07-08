/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 7, 2020, 3:26 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void Class();
class Human
{
public:
    string name;
    int age;
    
    void IntroduceSelf()
    {
        cout<<"I am " + name<<" and am ";
        cout<<+ age<<" years old"<<endl;
    }   
};
int main(int argc, char** argv) {
    
    Class();

    return 0;
}
void Class()
{
    Human firstMan;
    firstMan.name = "Adam";
    firstMan.age = 30;
    
    firstMan.IntroduceSelf();
}

