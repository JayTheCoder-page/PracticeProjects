/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on August 13, 2020, 2:33 PM
 */

#include <iostream>
#include <sstream>

using namespace std;

void Conversion();
class Date
{
private:
    int day, month, year;
    string dateInString;
    
public:
    Date(int inMonth, int inDay, int inYear)
         : month(inMonth), day(inDay), year(inYear){};
         
    operator const char*()
    {
        ostringstream formattedDate; //assists string construction
        formattedDate<<month<<" / "<<day<<" / "<<year;
        
        dateInString = formattedDate.str();
        return dateInString.c_str();
    }
};

int main(int argc, char** argv) {
    
    Conversion();

    return 0;
}
void Conversion()
{
    Date Holiday(12, 25, 2016);
    
    cout<<"Holiday is on: "<<Holiday<<endl;
    
    //string strHoliday(Holiday); //OK
    //strHoliday = Date(11, 11, 2016) //also OK
}