/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 15, 2020, 2:13 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void friendKeyword();
class Human
{
private:
    friend class Utility;
    string name;
    int age;
    
public:
    Human(string humansName, int humansAge)
    {
        name = humansName;
        age = humansAge;
    }
};
class Utility
{
public:
    static void DisplayAge(const Human& person)
    {
        cout<<person.age<<endl;
    }
};
int main(int argc, char** argv) {
    
    friendKeyword();//Using friend to Allow an External Class Utility
                    //Access to Private Data Members

    return 0;
}
void friendKeyword()
{
    Human firstMan("Adam", 25);
    cout<<"Accessing private member age via friend class: ";
    Utility::DisplayAge(firstMan);
}
