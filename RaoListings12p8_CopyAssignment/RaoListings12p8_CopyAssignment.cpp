/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on August 18, 2020, 12:55 PM
 */

#include <iostream>
#include <string.h>

using namespace std;

void CopyAssignment();
class MyString
{
private:
    char* buffer;
    
public:
    MyString(const char* initialInput)
    {
        if(initialInput != NULL)
        {
            buffer = new char [strlen(initialInput) + 1];
            strcpy(buffer, initialInput);
        }
        else
        {
            buffer = NULL;
        }
    }
    
    //Copy assignment operator
    MyString& operator= (const MyString& copySource)
    {
        if((this != &copySource) && (copySource.buffer != NULL))
        {
            if(buffer != NULL)
            {
                delete[] buffer;
                
                //ensure deep copy by first allocating own buffer
                buffer = new char [strlen(copySource.buffer) + 1];
                
                //copy from the source into local buffer
                strcpy(buffer, copySource.buffer);
            }
        }
        
        return *this;
    }
    
    operator const char*()
    {
        return buffer;
    }
    
    ~MyString()
    {
        delete[] buffer;
    }
};

int main(int argc, char** argv) {
    
    CopyAssignment();//A Better class MyString from Listing 9.9 with a Copy
                     //Assignment
    return 0;
}
void CopyAssignment()
{
    MyString string1("Hello ");
    MyString string2(" World");
    
    cout<<"Before assignment: "<<endl;
    cout<<string1<<string2<<endl;
    string2 = string1;
    cout<<"After assignment string2 = string1: "<<endl;
    cout<<string1<<string2<<endl;
}
