/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on June 27, 2020, 3:55 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void Model(); //Model of Class Human Where the True age is Abstracted
              //from the User and a Younger Age is reported
class Human
{
private:
    //Private member data
    int age;
    
public:
    void SetAge (int inputAge)
    {
        age = inputAge;
    }
    
    //Human lies about his / her age (if over 30)
    int GetAge()
    {
        if (age > 30)
        {
            return (age - 2);
        }
        else
        {
            return age;
        }
    }
};
void PreviousLessons();
void DataPointManipulation();
void AccessMemory();
void AllocateRelease();
void Offset();

int main(int argc, char** argv) {
    
    Model();
    //PreviousLessons();

    return 0;
}
void Model()
{
    Human firstMan;
    firstMan.SetAge(35);
    
    Human firstWoman;
    firstWoman.SetAge(22);
    
    cout<<"Age of firstMan: "<<firstMan.GetAge()<<endl;
    cout<<"Age of firstWoman: "<<firstWoman.GetAge()<<endl;
}
void PreviousLessons()
{
    DataPointManipulation();
    //AccessMemory();
    //AllocateRelease();
    //Offset();
   
}
void DataPointManipulation()
{
    int catAge = 5;
    
    int* pointsToAge = &catAge;
    
    cout<<"catAge = "<<catAge<<endl;
    
    cout<<"Enter age of cat: ";
    cin>>*pointsToAge;
    
    cout<<"Input stored at: "<<hex<<pointsToAge<<endl;
    cout<<"catAge: "<<dec<<catAge<<endl;
}
void AccessMemory()
{
    //Request for memory space using float
    float* pointsToSize = new float;
    
    cout<<"Enter size: ";
    cin>>*pointsToSize;
    
    cout<<"size "<<*pointsToSize<<" is located at "<<hex<<pointsToSize<<endl;
    
    delete pointsToSize;
}
void AllocateRelease()
{
    cout<<"Number of entries?"<<endl;
    int Num = 0;
    cin>>Num;
    
    int* pointsToNum = new int[Num];
    
    cout<<"Num "<<Num<<" is located at "<<hex<<pointsToNum<<endl;
    
    delete[] pointsToNum;
}
void Offset()
{
    cout<<"How many integers to you wish to enter?"<<endl;
    int numEntry = 0;
    cin>>numEntry;
    
    int* pointsToInt = new int[numEntry];
    
    cout<<"Allocated for "<<numEntry<<" integers"<<endl;
    for(int counter = 0; counter < numEntry; ++counter)
    {
        cout<<"Enter numEntry "<<counter<<": "<<endl;
        cin>>*(pointsToInt + counter);
    }
    
    cout<<"Displaying integers"<<endl;
    for(int counter = 0; counter < numEntry; ++counter)
    {
        cout<<*(pointsToInt + counter)<<" ";
    }
    
    cout<<endl;
    
    pointsToInt -= numEntry;
    
    delete[] pointsToInt;
}