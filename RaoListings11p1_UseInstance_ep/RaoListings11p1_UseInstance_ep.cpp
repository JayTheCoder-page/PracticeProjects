/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on August 5, 2020, 3:05 PM
 */

#include <iostream>

using namespace std;

void Invoke();
class Spider
{
public:
    void Crawl()
    {
        cout<<"Spider crawl: "<<endl;;
    }
};
class BlackWidow:public Spider
{
public:
    void Crawl()
    {
        cout<<"Black widow crawl: "<<endl;
    }
};
void MakeSpiderCrawl(Spider& inputS)
{
    inputS.Crawl();
    //BlackWidow inputS (w/o & address)
    //would somehow have the same output
}
int main(int argc, char** argv) {
    
    Invoke();

    return 0;
}
void Invoke()
{
    BlackWidow getRidOf;
    
    getRidOf.Crawl();
            
    MakeSpiderCrawl(getRidOf);
}

