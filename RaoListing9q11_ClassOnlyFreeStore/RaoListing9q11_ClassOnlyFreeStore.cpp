
/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 14, 2020, 2:20 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void MonsterDB();
class MonsterDB
{
private:
    ~MonsterDB(){}; //private destructor prevents instances on stack
    
public:
    static void DestryInstance(MonsterDB* pInstance)
    {
        delete pInstance; //member can invoke private destructor
    }
    
    void DoSomething(){}; //simple empty member method
};

int main(int argc, char** argv) {
    
    MonsterDB(); //A Database Class MonsterDB That Allows Objects Creation Only
                 //on the Free Store (Using new)

    return 0;
}
void MonsterDB()
{
    MonsterDB* myDB = new MonsterDB(); //on heap
    myDB->DoSomething();
    
    //uncomment next line to see compile failure
    //delete myDB; //private destructor cannot be invoked
    
    //use static member to release memory
    MonsterDB::DestroyInstance(myDB);
    
    //page 250: "If you see a memory leak here..." 
    //Hypothesis: code is supposed to be incapable of
    // running
}
