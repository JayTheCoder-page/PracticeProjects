/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on August 21, 2020, 11:48 AM
 */

#include <iostream>

using namespace std;

void Conversion();
struct Temperature
{
    float Kelvin;
    Temperature(long float kelvin) : Kelvin(kelvin) {}
};

Temperature operator"" _C(long float celcius)
{
    return Temperature(celcius + 273);
}

Temperature operator "" _F(long float fahrenheit)
{
    return Temperature(((fahrenheit + 459.67) * 5)/ 9);
}

int main(int argc, char** argv) {
    
    Conversion();//Conversion from Fahrenheit and Centigrade to the
                 //Kevin Scale
    
    //Program will NOT run. All doubles for this listing, along with the previous ones,
    //are replaced with floats
    return 0;
}
void Conversion()
{
    Temperature k1 = 31.73_F;
    Temperature k2 = 0.0_C;
    
    cout<<"k1 is "<<k1.Kelvin<<" Kelvin"<<endl;
    cout<<"k2 is "<<k2.Kelvin<<" Kelvin"<<endl;
}
