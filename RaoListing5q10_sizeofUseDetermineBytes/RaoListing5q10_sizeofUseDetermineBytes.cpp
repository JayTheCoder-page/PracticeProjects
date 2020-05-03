/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on May 2, 2020, 6:19 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void sizeofInt();

int main(int argc, char** argv) {
    
    sizeofInt();

    return 0;
}
void sizeofInt()
{
    cout<<"sizeof(int) = "<<sizeof(int)<<endl;
    
    cout<<"Use sizeof to determine memory used by arrays"<<endl;
    int myNumbers[100] = {0};
    
    cout<<"Bytes used by an int: "<<sizeof(int)<<endl;
    cout<<"Bytes used by myNumbers: "<<sizeof(myNumbers)<<endl;
    cout<<"Bytes used by an element: "<<sizeof(myNumbers[0])<<endl;
}

