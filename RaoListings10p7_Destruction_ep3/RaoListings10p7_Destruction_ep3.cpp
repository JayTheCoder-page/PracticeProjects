/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 30, 2020, 6:19 PM
 */

#include <iostream>

using namespace std;

void Destructor();
class JuliusStatue
{
public:
    JuliusStatue()
    {
        cout<<"JS constructor"<<endl;
    }
    
    ~JuliusStatue()
    {
        cout<<"JS destructor"<<endl;
    }
};
class JuliusCaesar
{
protected:
    JuliusStatue concrete;
    
public:
    JuliusCaesar()
    {
        cout<<"JC constructor"<<endl;
    }
    
    ~JuliusCaesar()
    {
        cout<<"JC destructor"<<endl;
    }
};
class PompeyPainting
{
public:
    PompeyPainting()
    {
        cout<<"PP constructor"<<endl;
    }
    
    ~PompeyPainting()
    {
        cout<<"PP destructor"<<endl;
    }
};
class Pompey: public JuliusCaesar
{
private:
    PompeyPainting paint;
    
public:
    Pompey()
    {
        cout<<"P constructor"<<endl;
    }
    
    ~Pompey()
    {
        cout<<"P destructor"<<endl;
    }
};
int main(int argc, char** argv) {
    
    Destructor();

    return 0;
}
void Destructor()
{
    Pompey RomanGeneral;
}
