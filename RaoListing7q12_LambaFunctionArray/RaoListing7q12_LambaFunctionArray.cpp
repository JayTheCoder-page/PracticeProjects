/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on May 5, 2020, 3:43 PM
 */

#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void Lambda();
void DisplayNums(vector<int>&);

int main(int argc, char** argv) {
    
    Lambda();

    return 0;
}
void Lambda()
{
    vector<int> myNums;
    myNums.push_back(501);
    myNums.push_back(-1);
    myNums.push_back(25);
    myNums.push_back(-35);
    
    DisplayNums(myNums);
    
    cout<<"Sorting them in decreasing order"<<endl;
    
    sort (myNums.begin(), myNums.end(),
         [](int Num1, int Num2){return (Num2 < Num1);});
         
    DisplayNums(myNums);
}
void DisplayNums(vector<int>& dynArray)
{
    for_each (dynArray.begin(), dynArray.end(),
             [](int Element){cout<<Element<<" ";});
             
    cout<<endl;
}

