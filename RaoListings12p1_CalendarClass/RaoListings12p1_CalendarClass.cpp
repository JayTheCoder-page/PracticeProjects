/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on August 13, 2020, 2:21 PM
 */

#include <iostream>

using namespace std;

void Calendar();
class Date
{
private:
    int day, month, year;
    
public:
    Date(int inMonth, int inDay, int inYear)
         : month (inMonth), day(inDay), year(inYear){};
         
    Date& operator ++ () //prefix increment
    {
        ++day;
        return *this;
    }
    
    Date& operator -- () //prefix decrement
    {
        --day;
        return *this;
    }
    
    void DisplayDate()
    {
        cout<<month<<" / "<<day<<" / "<<year<<endl;
    }
};

int main(int argc, char** argv) {
    
    Calendar();//A Calendar That Handles Day, Month, and Year, and Allows 
               //Incrementing and Decrementing Days
    return 0;
}
void Calendar()
{
    Date holiday(12, 25, 2016); //Dec 25, 2016
    
    cout<<"The date object is initialized to: ";
    holiday.DisplayDate();
    
    ++holiday; //move date ahead by a day
    cout<<"Date after prefix-increment is: ";
    holiday.DisplayDate();
    
     --holiday; //move date ahead by a day
    cout<<"Date after a prefix-decrement is: ";
    holiday.DisplayDate();
}
