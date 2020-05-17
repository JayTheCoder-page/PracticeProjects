/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on May 7, 2020, 7:41 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void Pointer();

int main(int argc, char** argv) {
    
    Pointer();

    return 0;
}
void Pointer()
{
    int age = 30;
    int *pointsToInt = &age;
    
    cout<<"Integer age is at: "<<pointsToInt<<endl;
}

