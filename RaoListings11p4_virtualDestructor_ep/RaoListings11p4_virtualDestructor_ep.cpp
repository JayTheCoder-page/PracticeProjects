/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on August 6, 2020, 11:53 AM
 */

#include <iostream>

using namespace std;

void vDestructor();
class Italian
{
public:
    Italian()
    {
        cout<<"Italian constructor"<<endl;
    }
    virtual ~Italian()
    {
        cout<<"Italian destructor"<<endl;
    }
};
class Pizza:public Italian
{
public:
    Pizza()
    {
        cout<<"Pizza constructor"<<endl;
    }
    virtual ~Pizza()
    {
        cout<<"Pizza destructor"<<endl;
    }
};
void DeleteItalianMemory(Italian* pItaly)
{
    delete pItaly;
}
int main(int argc, char** argv) {
    
    vDestructor();

    return 0;
}
void vDestructor()
{
    cout<<"Allocating Pizza to new storage"<<endl;
    Pizza* cheese = new Pizza;
    
    cout<<"\nDelete Pizza"<<endl;
    DeleteItalianMemory(cheese);
    
    cout<<"\nInitializing a new Pizza on stack"<<endl;
    Pizza pepperoni;
}
