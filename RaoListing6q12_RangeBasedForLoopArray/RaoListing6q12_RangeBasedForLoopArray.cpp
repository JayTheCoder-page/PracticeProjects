/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on May 4, 2020, 12:51 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void RangeLoop();

int main(int argc, char** argv) {
    
    RangeLoop();

    return 0;
}
void RangeLoop()
{
    int someNums[] = {1, 101, -1, 40, 2040};
    
    for(const int& aNum : someNums)
        cout<<aNum<<' ';
    cout<<endl;
    
    for(auto anElement : {5, 222, 110, -45, 2017})
        cout<<anElement<<' ';
    cout<<endl;
    
    char charArray[] = {'h', 'e', 'l', 'l', 'o'};
    for(auto aChar : charArray)
        cout<<aChar<<' ';
    cout<<endl;
    
    float moreNums[] = {3.14, -1.3, 22, 10101};
    for(auto anElement : moreNums)
        cout<<anElement<<' ';
    cout<<endl;
    
    string sayHello{"Hello World!"};
    for(auto anElement : sayHello)
        cout<<anElement<<' ';
    cout<<endl;
}

