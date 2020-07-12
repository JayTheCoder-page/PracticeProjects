/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 11, 2020, 2:44 PM
 */

#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

void Buffer();
class MyString 
{
private:
    char* buffer;
    
public:
    Mystring(const char* startString)
    {
        if(startString != NULL)
        {
            buffer = new char [strlen(startString) + 1];
            strcpy(buffer, startString);
        }
        else
        {
            buffer = NULL;
        }
    }
    
    ~MyString()
    {
        cout<<"Invoking destructor, clearing up"<<endl;
        if(buffer != NULL)
        {
            delete[] buffer;
        }
    }
    
    int GetLength()
    {
        return strlen(buffer);
    }
    
    const char* GetString()
    {
        return buffer;
    }    
};

int main(int argc, char** argv) {
    
    Buffer();

    return 0;
}
void Buffer()
{
    MyString byePlanet("Goodbye planet");
    //Program will not run due to line above. Figure this out later.
    cout<<"byePlanet is "<<byePlanet.GetLength()<<" characters long";
    cout<<"Buffer contains: "<<byePlanet.GetString()<<endl;
}

