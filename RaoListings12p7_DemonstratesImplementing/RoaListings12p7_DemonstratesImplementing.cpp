/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on August 17, 2020, 4:01 PM
 */

#include <iostream>

using namespace std;

void Demonstration();
class Date
{
private:
    int day, month, year;
    
public:
    Date(int inMonth, int inDay, int inYear)
       : month(inMonth), day(inDay), year(inYear){}
       
    bool operator< (const Date& compareTo)
    {
        if(year < compareTo.year)
        {
            return true;
        }
        else if((year == compareTo.year) && (month < compareTo.month))
        {
            return true;
        }
        else if((year == compareTo.year) && (month == compareTo.month) && 
                (day < compareTo.day))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
    bool operator<= (const Date& compareTo)
    {
        if(this->operator== (compareTo))
        {
            return true;
        }
        else
        {
            return this->operator< (compareTo);
        }
    }
    
    bool operator > (const Date& compareTo)
    {
        return !(this->operator<= (compareTo));
    }
    
    bool operator== (const Date& compareTo)
    {
        return((day == compareTo.day) && (month == compareTo.month) 
                && (year == compareTo.year));
    }
    
    bool operator>= (const Date& compareTo)
    {
        if(this->operator== (compareTo))
        {
            return true;
        }
        else
        {
            return this->operator> (compareTo);
        }
    }
    
    void DisplayDate()
    {
        cout<<month<<" / "<<day<<" / "<<year<<endl;
    }
};

int main(int argc, char** argv) {
    
    Demonstration();//Demonstrate Implementing <, <=, >, and >= Operators

    return 0;
}
void Demonstration()
{
    Date holiday1(12, 25, 2016);
    Date holiday2(12, 31, 2016);
    
    cout<<"holiday 1 is: ";
    holiday1.DisplayDate();
    cout<<"holiday 2 is: ";
    holiday2.DisplayDate();
    
    if(holiday1 < holiday2)
    {
        cout<<"operator<: holiday1 happens first"<<endl;
    }
    
    if(holiday1 > holiday2)
    {
        cout<<"operator>: holiday1 happens later"<<endl;
    }
    
    if(holiday1 <= holiday2)
    {
        cout<<"operator<=: holiday1 happens on or before holiday2"<<endl;
    }
    
    if(holiday1 >= holiday2)
    {
        cout<<"operator>=: holiday1 happens on or after holiday2"<<endl;
    }
}
