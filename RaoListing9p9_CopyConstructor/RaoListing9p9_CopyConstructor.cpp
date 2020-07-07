/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 6, 2020, 2:09 PM
 */

#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

void CopyConstructor(); //Define CC to ensure deep copy of dynamically allocated buffers
class MyString
{
private:
    char* buffer;
    
public:
    MyString(const char* initString) // constructor
    {
        buffer = NULL;
        cout<<"Default constructor: creating new MyString"<<endl;
        if(initString != NULL)
        {
            buffer = new char [strlen(initString) + 1];
            strcpy(buffer, initString);
            //yellow line below strcpy
            //"It is not possible to limit these functions to a maximum buffer size.
            //The use of these functions will always force reviewers to follow the logic, 
            //and prevent automated scanning of source code for vulnerabilities.
            //Alternative: strlcpy(dst, src, dstsize);"
            
            //Program will NOT run!
            
            cout<<"buffer points to: "<<hex;
            cout<<(unsigned int*)buffer<<endl;
        }
    }
    
    MyString(const MyString& copySource) //Copy constructor
    {
        buffer = NULL;
        cout<<"Copy constructor: copying from MyString"<<endl;
        if(copySource.buffer != NULL)
        {
            //allocate own buffer
            buffer = new char [strlen(copySource.buffer) + 1];
            
            //deep copy from the source into local buffer
            strcpy(buffer, copySource.buffer);
            
            cout<<"buffer points to "<<hex;
            cout<<(unsigned int*)buffer<<endl;
        }
    }
    
    //Destructor
    ~MyString()
    {
        cout<<"Invoking destructor, clearing up"<<endl;
        delete [] buffer;
    }
    
    int GetLength()
    {
        return strlen(buffer);
    }
    
    const char* GetString()
    {
        return buffer;
    }
    
    void UseMyString(MyString str)
    {
        cout<<"String buffer in MyString is "<<str.GetLength();
        cout<<"characters long"<<endl;
        
        cout<<"buffer contains: "<<str.GetString()<<endl;
        return;
    }
};

int main(int argc, char** argv) {
    
    CopyConstructor();

    return 0;
}
void CopyConstructor()
{
    MyString sayHello("Hello from String Class");
    UseMyString(sayHello);
    //Program will NOT run! Figure this out later.
}
