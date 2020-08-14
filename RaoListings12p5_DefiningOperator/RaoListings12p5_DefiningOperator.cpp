/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on August 13, 2020, 5:59 PM
 */

#include <iostream>

using namespace std;

void Defining();
class Date
{
private:
    int day, month, year;
    
public:
    Date(int inMonth, int inDay, int inYear)
       : month(inMonth), day(inDay), year(inYear){}
       
       void operator+= (int daysToAdd) //addition assignment
       {
           day += daysToAdd;
       }
       
       void operator-= (int daysToSub) //subtraction assignment
       {
           day -= daysToSub;
       }
       
       void DisplayDate()
       {
           cout<<month<<" / "<<day<<" / "<<year<<endl;
       }
};

int main(int argc, char** argv) {
    
    Defining();

    return 0;
}
void Defining()
{
    Date holiday(12, 25, 2016);
    cout<<"hoilday is on: ";
    holiday.DisplayDate();
    
    cout<<"holiday -= 19 gives: ";
    holiday -= 19;
    holiday.DisplayDate();
    
    cout<<"holiday += 25 gives: ";
    holiday += 25;
    holiday.DisplayDate();
}
