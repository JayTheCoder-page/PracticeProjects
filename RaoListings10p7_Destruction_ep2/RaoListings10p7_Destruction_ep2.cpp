/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 30, 2020, 6:02 PM
 */

#include <iostream>

using namespace std;

void Destruction();
class ChimpToy
{
public:
    ChimpToy()
    {
        cout<<"ChimpToy constructor"<<endl;
    }
    
    ~ChimpToy()
    {
        cout<<"ChimpToy destructor"<<endl;
    }
};
class Chimpanzee
{
protected:
    ChimpToy rainforest;
    
public:
    Chimpanzee()
    {
        cout<<"Chimpanzee constructor"<<endl;
    }
    
    ~Chimpanzee()
    {
        cout<<"Chimpanzee destructor"<<endl;
    }
};
class OrangToy
{
public:
    OrangToy()
    {
        cout<<"OrangToy constructor"<<endl;
    }
    
    ~OrangToy()
    {
        cout<<"OrangToy destructor"<<endl;
    }
};
class Orangutan: public Chimpanzee
{
private:
    OrangToy rainforest;
    
public:
    Orangutan()
    {
        cout<<"Orangutan constructor"<<endl;
    }
    
    ~Orangutan()
    {
        cout<<"Orangutan destructor"<<endl;
    }
};
int main(int argc, char** argv) {
    
    Destruction();

    return 0;
}
void Destruction()
{
    Orangutan rainforest;
}
