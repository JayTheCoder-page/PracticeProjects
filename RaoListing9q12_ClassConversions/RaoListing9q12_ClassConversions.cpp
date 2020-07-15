/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 14, 2020, 2:48 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void BlockConversions();
class Human
{
    int age;
public:
    //explicit constructor blocks implicit conversions
    explicit Human(int humansAge) : age(humansAge){}
};
void DoSomething(Human person)
{
    cout<<"Human sent did something"<<endl;
    return;
}
int main(int argc, char** argv) {
    
    BlockConversions();//Use keyword explicit to Block Unintentional Implicit
                       //Conversations

    return 0;
}
void BlockConversions()
{
   Human kid(10); //explicit conversion is OK
   Human anotherKid = Human(11); //explicit OK
   DoSomething(kid); //OK
   
   //Human anotherKid2 = 11; //failure: implicit conversion not OK
   //DoSomething(10); //implicit conversation
}
