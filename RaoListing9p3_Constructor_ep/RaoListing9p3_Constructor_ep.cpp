/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 7, 2020, 5:38 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void Constructor();
class Human
{
private:
    int age;
    string name;
    
public:
    Human()
    {
        age = 1;
        cout<<"Construction"<<endl;
    }
    
    void SetAge(int humanAge)
    {
        age = humanAge;
    }
    
    void SetName(string humanName)
    {
        name = humanName;
    }
    
    void IntroduceSelf()
    {
        cout<<"I am "<<name<<" and am "<<age;
        cout<<" years old"<<endl;
    }
};

int main(int argc, char** argv) {
    
    Constructor();

    return 0;
}
void Constructor()
{
    Human firstWoman;
    firstWoman.SetAge(28);
    firstWoman.SetName("Eve");
    
    firstWoman.IntroduceSelf();
}

