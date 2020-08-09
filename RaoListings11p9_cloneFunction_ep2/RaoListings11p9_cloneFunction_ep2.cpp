/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on August 8, 2020, 7:50 PM
 */

#include <iostream>

using namespace std;

void Function();
class Toiletries
{
public:
    virtual Toiletries* AssemblyLine() = 0;
    virtual void Clean() = 0;
    virtual ~Toiletries(){};
};
class Toothpaste:public Toiletries
{
public:
    Toiletries* AssemblyLine() override
    {
        return new Toothpaste(*this);
    }
    void Clean() override final
    {
        cout<<"Toothpaste whitens teeth"<<endl;
    }
};
class Crest final:public Toothpaste
{
public:
    Toiletries* AssemblyLine() override
    {
        return new Crest(*this);
    }
};
class Bodywash final:public Toiletries
{
public: 
    Toiletries* AssemblyLine() override
    {
        return new Bodywash(*this);
    }
    void Clean() override final
    {
        cout<<"Bodywash cleans the body"<<endl;
    }
};
int main(int argc, char** argv) {
    
    Function();

    return 0;
}
void Function()
{
    const int S = 4;
    
    Toiletries* myToiletries[S] = {NULL};
    
    myToiletries[0] = new Toothpaste(); 
    myToiletries[1] = new Bodywash();
    myToiletries[2] = new Crest();
    myToiletries[3] = new Bodywash();
    
    Toiletries* myNewToiletries[S];
    
    for(int i = 0; i < S; ++i)
    {
        myNewToiletries[i] = myToiletries[i]->AssemblyLine();
    }
    
    for(int i = 0; i < S; ++i)
    {
        myToiletries[i]->Clean();
    }
    
    for(int i = 0; i < S; ++i)
    {
        delete myToiletries[i];
        delete myNewToiletries[i];
    }
}