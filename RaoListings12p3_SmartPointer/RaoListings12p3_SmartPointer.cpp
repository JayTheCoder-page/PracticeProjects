/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on August 13, 2020, 3:04 PM
 */

#include <iostream>
#include <memory> //new include to use unique_ptr

using namespace std;

void SmartP();
class Date
{
private:
    int day, month, year;
    string dateInString;
    
public:
    Date(int inMonth, int inDay, int inYear)
       : month(inMonth), day(inDay), year(inYear){};
       
    void DisplayDate()
    {
        cout<<month<<" / "<<day<<" / "<<year<<endl;
    }
};

int main(int argc, char** argv) {
    
    SmartP();//Using Smart Pointer unique_ptr to Manage a Dynamically Allocated Instance 
             //of class Date
    return 0;
}
void SmartP()
{
    unique_ptr<int> smartIntPtr(new int);
    *smartIntPtr = 42;
    
    //Use smart pointer type like an int*
    cout<<"Integer value is: "<<*smartIntPtr<<endl;
    
    unique_ptr<Date> smartHoliday(new Date(12, 25, 2016));
    cout<<"The new instance of date contains: ";
    
    //use smartHoliday just as you would a Date*
    smartHoliday->DisplayDate();
}
