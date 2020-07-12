/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 11, 2020, 5:47 PM
 */

#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

void Buffer();
class Coconut
{
private:
    char* shell;
    
public:
    Coconut(const char* copra)
    {
        if(copra != NULL)
        {
            shell = new char[strlen(copra)];
            strcpy(shell, copra);
        }
        
        else
        {
            shell = NULL;
        }
    }
    
    ~Coconut()
    {
        if(shell = NULL)
        {
            cout<<"Invoking destructor, clearing up"<<endl;
            delete[] shell;
        }
    }
    
    int GetLength()
    {
        return strlen(shell);
    }
    
    const char* GetString()
    {
        return shell;
    }
};

int main(int argc, char** argv) {
    
    Buffer();

    return 0;
}
void Buffer()
{
    Coconut white("The natural habitat of this fruit is tropical shorelines");
    cout<<"white is "<<white.GetLength()<<" characters long"<<endl;
    cout<<"Shell contains: "<<white.GetString()<<endl;
}
