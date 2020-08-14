/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on August 13, 2020, 5:33 PM
 */

#include <iostream>

using namespace std;

void Binary();
class Date
{
private:
    int day, month, year;
    string dateInString;
    
public:
    Date(int inMonth, int inDay, int inYear)
       : month(inMonth), day(inDay), year(inYear){};
       
       Date operator + (int daysToAdd) //binary addition
       {
           Date newDate(month, day + daysToAdd, year);
           return newDate;
       }
       
       Date operator - (int daysToSub) //binary subtraction
       {
           return Date(month, day - daysToSub, year);
       }
       
       void DisplayDate()
       {
           cout<<month<<" / "<<day<<" / "<<year<<endl;
       }
};

int main(int argc, char** argv) {
    
    Binary();//Calendar Class Featuring the Binary Addition Operator

    return 0;
}
void Binary()
{
    Date Holiday(12, 25, 2016);
    cout<<"Holiday on: ";
    Holiday.DisplayDate();
    
    Date PreviousHoliday(Holiday - 19);
    cout<<"Previous holiday on: ";
    PreviousHoliday.DisplayDate();
    
    Date NextHoliday(Holiday + 6);
    cout<<"Next holiday on: ";
    NextHoliday.DisplayDate();
}
