/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 12, 2020, 12:37 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void Singleton();
class President
{
private:
    President (){};
    President (const President&);
    const President& operator = (const President&);
    
    string name;
    
public:
    static President& GetInstance()
    {
        static President OnlyInstance;
        return OnlyInstance;
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
void Singleton2();
class TalkShowHost
{
private:
    TalkShowHost(){};
    TalkShowHost(const TalkShowHost&);
    const TalkShowHost& operator = (const TalkShowHost&);
    
    string name;
    
public: 
    static TalkShowHost& GetInstance()
    {
        static TalkShowHost onlyHost;
        return onlyHost;
    }
    
    string GetName()
    {
        return name;
    }
    
    void SetName (string hostName)
    {
        name = hostName;
    }  
};
int main(int argc, char** argv) {
    
    Singleton();
    Singleton2();

    return 0;
}
void Singleton()
{
    President& onlyPresident = President::GetInstance();
    onlyPresident.SetName("Abraham Lincoln");
    
    cout<<"The name of the President is ";
    cout<<President::GetInstance().GetName()<<endl;
}
void Singleton2()
{
    TalkShowHost& onlyHost = TalkShowHost::GetInstance();
    onlyHost.SetName("Joe Rogan");
    
    cout<<"The name of the host is ";
    cout<<TalkShowHost::GetInstance().GetName();
}
