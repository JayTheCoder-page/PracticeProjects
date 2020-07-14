/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 12, 2020, 4:01 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void Singleton();
class GreekGod
{
private:
    GreekGod(){};
    GreekGod(const GreekGod&);
    const GreekGod operator = (const GreekGod);
    
    string name;
    
public:
    static GreekGod& getInstance()
    {
        static GreekGod onlyGod;
        return onlyGod;
    }
    
    string getName()
    {
        return name;
    }
    
    setName(string godsName)
    {
        name = godsName;
    }
};

int main(int argc, char** argv) {
    
    Singleton();

    return 0;
}
void Singleton()
{
    GreekGod& onlyGod = GreekGod::getInstance();
    onlyGod.setName("Mars");
    
    cout<<"The name of the Greek god is ";
    cout<<GreekGod::getInstance().getName()<<endl;
}
