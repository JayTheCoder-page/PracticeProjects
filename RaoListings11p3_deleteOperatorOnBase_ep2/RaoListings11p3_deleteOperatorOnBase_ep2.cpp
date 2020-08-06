/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on August 5, 2020, 6:35 PM
 */

#include <iostream>

using namespace std;

void dOpBase();
class Continent
{
public:
    Continent()
    {
        cout<<"Continent forms"<<endl;
    }
    ~Continent()
    {
        cout<<"Continent breaks"<<endl;
    }
};
class SouthAmerica:public Continent
{
public:
    SouthAmerica()
    {
        cout<<"S America forms"<<endl;
    }
    ~SouthAmerica()
    {
        cout<<"S America breaks"<<endl;
    }
};
void DeleteContinentMemory(Continent* pLandmass)
{
    delete pLandmass;
}
int main(int argc, char** argv) {
    
    dOpBase();

    return 0;
}
void dOpBase()
{
    cout<<"New storage allocated for South America"<<endl;
    SouthAmerica* pSA = new SouthAmerica;
    
    cout<<"\nDelete South America memory"<<endl;
    DeleteContinentMemory(pSA);
    
    cout<<"\nSouth America initialized on stack"<<endl;
    SouthAmerica Brazil;
}
