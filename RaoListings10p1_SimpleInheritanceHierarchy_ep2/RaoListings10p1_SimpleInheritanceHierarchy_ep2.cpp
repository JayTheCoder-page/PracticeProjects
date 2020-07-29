/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 29, 2020, 1:17 PM
 */

#include <iostream>

using namespace std;

void Inheritance();
class Spider
{
public:
    bool buildsOrbs;
    
    void Crawls()
    {
        if(buildsOrbs)
        {
            cout<<"Spiders build orb webs"<<endl;
        }
        else
        {
            cout<<"Spider build cobwebs"<<endl;
        }
    }
};
class EuropeanGardenSpider: public Spider
{
public:
    EuropeanGardenSpider()
    {
        buildsOrbs = true;
    }
};
class GoldenOrbWeaver: public Spider
{
public:
    GoldenOrbWeaver()
    {
        buildsOrbs = true;
    }
};
int main(int argc, char** argv) {
    
    Inheritance();

    return 0;
}
void Inheritance()
{
    EuropeanGardenSpider Europe;
    GoldenOrbWeaver Japan;
    
    cout<<"About spider"<<endl;
    
    cout<<"Garden: ";
    Europe.Crawls();
    
    cout<<"Orb: ";
    Japan.Crawls();
}
