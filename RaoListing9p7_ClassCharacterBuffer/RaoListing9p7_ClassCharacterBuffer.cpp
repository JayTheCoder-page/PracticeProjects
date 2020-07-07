/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 6, 2020, 1:47 PM
 */

#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

void Buffer(); //A simple class that encapsulates a character buffer to ensure 
               //deallocation via the destructor 
class MyString
{
private:
    char* buffer;
    
public:
    MyString(const char* initString)
    {
        if(initString != NULL)
        {
            buffer = new char [strlen(initString) + 1];
            strcpy(buffer, initString);
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
            delete [] buffer;
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
    MyString sayHello("Hello from String Class");
    cout<<"String buffer in sayHello is "<<sayHello.GetLength();
    cout<<" characters long"<<endl;
    
    cout<<"Buffer contain: "<<sayHello.GetString()<<endl;
}

