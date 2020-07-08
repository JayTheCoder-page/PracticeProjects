/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 7, 2020, 4:31 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void Class();
class yellowStar
{
public:
    float age; //in billions of years
    string name;
    
    void NameStar()
    {
        cout<<"This star is "<<name<<" and is ";
        cout<<age<<" billion years old"<<endl;
    }
};

int main(int argc, char** argv) {
    
    Class();

    return 0;
}
void Class()
{
    yellowStar star1;
    star1.age = 4.603; //billion years old
    star1.name = "the sun";
    
    star1.NameStar();
    
    yellowStar star2;
    star2.age = 7.100; //billion
    star2.name = "Arcturus";
    
    star2.NameStar();
    
    yellowStar star3;
    star3.age = 0.590; //billion 
    star3.name = "Capella";
    
    star3.NameStar();
}

