/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 17, 2020, 2:11 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void friendKeyword();
class Bear
{
private:
    friend void DisplayAge(const Bear& Ursidae);
    string name;
    int age;
    
public:
    Bear(string bearsName, int bearsAge)
    {
        name = bearsName;
        age = bearsAge;
    }
};
void DisplayAge(const Bear& Urisade)
{
    cout<<Urisade.age<<endl;
}
int main(int argc, char** argv) {
    
    friendKeyword();

    return 0;
}
void friendKeyword()
{
    Bear firstBear("Pablo", 15);
    cout<<"Accessing private member age vis friend function: ";
    DisplayAge(firstBear);
}
