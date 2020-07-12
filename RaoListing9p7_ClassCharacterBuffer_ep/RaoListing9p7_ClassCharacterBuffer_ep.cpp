/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 11, 2020, 12:14 PM
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
    MyString(const char* initString)
    {
        if(initString != NULL)
        {
           buffer = new char[strlen(initString) + 1]; 
           strcpy(buffer, initString);
        }
        
        else
        {
            initString = NULL;
        }
    }
    
    ~MyString()
    {
        cout<<"Invoking destructor, clearing up"<<endl;
        
        if(buffer = NULL)
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
    MyString sayHello("Hello from string class");
    cout<<"sayHello string is "<<sayHello.GetLength()<<" ";
    cout<<"characters long"<<endl;
    
    cout<<"Buffer contains "<<sayHello.GetString()<<endl;
}
