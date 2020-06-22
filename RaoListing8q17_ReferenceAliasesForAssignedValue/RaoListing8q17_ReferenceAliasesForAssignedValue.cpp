/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on June 22, 2020, 12:49 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void Reference();

int main(int argc, char** argv) {
    
    Reference();

    return 0;
}
void Reference()
{
    int original = 30;
    cout<<"original = "<<original<<endl;
    cout<<"original is at the address: "<<hex<<&original<<endl;
    
    int& ref1 = original;
    cout<<"refl is at the address: "<<hex<<&ref1<<endl;
    
    int& ref2 = ref1;
    cout<<"ref2 is at address: "<<hex<<&ref2<<endl;
    cout<<"Therefore, ref2 = "<<dec<<ref2<<endl;
}

