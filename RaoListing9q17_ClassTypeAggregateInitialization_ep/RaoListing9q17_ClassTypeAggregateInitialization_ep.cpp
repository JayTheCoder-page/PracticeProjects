/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 26, 2020, 12:22 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void Aggregate();
class Aggregate1
{
public:
    int num;
    float pi;
};
struct Aggregate2
{
    char hello[6];
    int impNums[3];
    string world;
};
int main(int argc, char** argv) {
    
    Aggregate();

    return 0;
}
void Aggregate()
{
    int myNums[] = {1, 2, 3};
    Aggregate1 a1 {2016, 3.1416};
    cout<<"pi = "<<a1.pi<<endl;
    
    Aggregate2 a2 {{'h', 'e', 'l', 'l', 'o', '\0'}, {2011, 2014, 2017}, "world"};
    
    cout<<a2.hello<<' '<<a2.world<<endl;
}
