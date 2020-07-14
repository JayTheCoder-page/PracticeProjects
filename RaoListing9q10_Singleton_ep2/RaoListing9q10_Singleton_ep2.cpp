/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 12, 2020, 3:04 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void Singleton();
class Athlete
{
private:
    Athlete(){};
    Althele(const Athlete&);
    const Athlete& operator = (const Athlete&);
    
    string name;
    
public:
    static Athlete& GetInstance()
    {
        static Athlete onlyAthlete;
        return onlyAthlete;
    }
    
    string getName()
    {
        return name;
    }
    
    setName(string athleteName)
    {
        name = athleteName;
    }
};

int main(int argc, char** argv) {
    
    Singleton();

    return 0;
}
void Singleton()
{
    Athlete& onlyAthlete = Athlete::GetInstance();
    onlyAthlete.setName("Kobe Bryant");
    
    cout<<"The name of the athlete is ";
    cout<<Athlete::GetInstance().getName()<<endl;
}
