/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 26, 2020, 12:51 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void Aggregate();
class Aggregate1
{
public:
    int num;
    float gravConst; //gravitational constant
};
struct Aggregate2
{
    char Pluto[6];
    int impNums[2];
    string planetStatus;
};

int main(int argc, char** argv) {
    
    Aggregate();

    return 0;
}
void Aggregate()
{
    Aggregate1 a1 = {10000, 6.673e-11};
    cout<<"gravitational constant = "<<a1.gravConst<<" N m^2 kg^(-2)"<<endl;
    
    Aggregate2 a2{{'P', 'l','u','t','o', '\0'}, {911, 1984}, "is not considered a planet anymore"};
    
    cout<<a2.Pluto<<' '<<a2.planetStatus<<endl;   
}
