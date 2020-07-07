/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 6, 2020, 3:13 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void Singleton(); //Singleton class President that prohibits copying, assignment,
                  //and multiple instance creation
class President
{
private:
    President() {}; //private default constructor
    President(const President&); //private default constructor
    const President& operator = (const President&); //
    
    string name;

public: 
    static President& GetInstance()
    {
        //static objects are constructed only once
        static President onlyInstance;
        return onlyInstance;
    }
    
    string GetName()
    {
        return name;
    }
    
    void SetName(string InputName)
    {
        name = InputName;
    }
};

int main(int argc, char** argv) {
    
    Singleton();

    return 0;
}
void Singleton()
{
    President& onlyPresident = President::GetInstance();
    onlyPresident.SetName("Abraham Lincoln");
    
    //uncomment lines to see how compile failures prohibit duplications
    //President second; //cannot access constructor
    //President* third = new President() //cannot access constructions
    //President fourth = onlyPresident = onlyPresident; //cannot copy constructors
    //onlyPresident = President::GetInsurance(); //cannot access operator
    
    cout<<"The name of the President is: ";
    cout<<President::GetInstance().GetName()<<endl;
}

