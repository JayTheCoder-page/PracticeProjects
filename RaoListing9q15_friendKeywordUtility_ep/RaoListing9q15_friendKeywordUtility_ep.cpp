/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on July 17, 2020, 3:22 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void keywordUtility();
class Country
{
private:
    friend class Utility;
    string name;
    int area;
    
public:
    Country(string countryName, int areaOfCountry)
    {
        name = countryName;
        area = areaOfCountry;
    }
};
class Utility
{
public:
    static void DisplayArea(const Country& Nation)
    {
        cout<<Nation.area<<endl;
    }
};
int main(int argc, char** argv) {
    
    keywordUtility();

    return 0;
}
void keywordUtility()
{
    Country oldestCountry ("Republic of San Marino", 24);
    cout<<"Accessing private int, size (mi^2) of RoSM is: ~";
    Utility::DisplayArea(oldestCountry);
}
