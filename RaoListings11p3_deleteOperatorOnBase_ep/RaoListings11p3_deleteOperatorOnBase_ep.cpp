/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on August 5, 2020, 6:00 PM
 */

#include <iostream>

using namespace std;

void dOperatorB();
class Tree
{
public:
    Tree()
    {
        cout<<"Tree grows"<<endl;
    }
    ~Tree()
    {
        cout<<"Tree dies"<<endl;
    }
};
class WeepingWillow:public Tree
{
public:
    WeepingWillow()
    {
        cout<<"Weeping willow grows"<<endl;
    }
    ~WeepingWillow()
    {
        cout<<"Weeping willow dies"<<endl;
    }
};
void DeleteTree(Tree* pTree)
{
    delete pTree;
}
int main(int argc, char** argv) {
    
    dOperatorB();

    return 0;
}
void dOperatorB()
{
    cout<<"Allocate WW on new store: "<<endl;
    WeepingWillow* pWill = new WeepingWillow;
    cout<<"\nDeleting the willow: "<<endl;
    DeleteTree(pWill);
    
    cout<<"\nInitializing a willow on stack: "<<endl;
    WeepingWillow SalixBabylonica;
}
