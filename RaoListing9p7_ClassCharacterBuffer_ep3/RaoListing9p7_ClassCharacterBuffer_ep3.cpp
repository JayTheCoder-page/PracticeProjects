/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 11, 2020, 4:38 PM
 */

#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

void Buffer();

class StringCheese
{
private:
    char* wrapper;
    
public:
    StringCheese(const char* mozzarella)
    {
        if(mozzarella != NULL)
        {
            wrapper = new char [strlen(mozzarella) + 1];
            strcpy(wrapper, mozzarella);
        }
        
        else
        {
            wrapper = NULL;
        }
    }
    
    ~StringCheese()
    {
        cout<<"Invoking destructor, clearing up"<<endl;
        if(wrapper = NULL)
        {
            delete [] wrapper;
        }
    }
    
    int GetLength()
    {
        return strlen(wrapper);
    }
    
    const char* GetString()
    {
        return wrapper;
    }
    
};

int main(int argc, char** argv) {
    
    Buffer(); //RaoListing9p7_ClassCharacterBuffer_ep3 
              //Successfully prints
    
    //However, RaoListing9p7_ClassCharacterBuffer_ep2 (two, NOT three)
    //for some reason will not. Continue investigating later

    return 0;
}
void Buffer()
{
    StringCheese white("This is so long");
    cout<<"The length of white is "<<white.GetLength();
    cout<<" characters long"<<endl;
    
    cout<<"Wrapper contains: "<<white.GetString()<<endl;
}
