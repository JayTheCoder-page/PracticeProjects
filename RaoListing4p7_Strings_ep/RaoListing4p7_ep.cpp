/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on April 23, 2020, 6:56 PM
 */

#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

void Function();
//Previous Lessons from Sams Teach Yourself C++ by Siddhartha Rao
void CharacterNull();
void Enum();

int main(int argc, char** argv) {
    
    Function();
    //CharacterNull();
    //Enum();

    return 0;
}
void Function()
{
    string stringOne ("First came Mercury.");
    cout<<stringOne<<endl;
    
    cout<<"Enter a string: "<<endl; //Second came Venus.
    string stringTwo;
    getline(cin, stringTwo);
    
    cout<<"Enter another: "<<endl; //Third came Earth.
    string stringThree;
    getline(cin, stringThree);
    
    string stringFour = stringTwo + " " + stringThree;
    cout<<stringFour<<endl;
    
    string stringDuplicate;
    stringDuplicate = stringFour;
    cout<<stringDuplicate<<endl;
    
    cout<<"The length of stringFour is "<<stringFour.length()<<endl;  
}
void CharacterNull()
{
    char character[] = {'W', 'h', 'y', '?', ' ', 'T', 'h', 'e', ' ', 'b', 'o', 'y', ' ', 's',
                        'a', 'i', 'd', '\0'};
    cout<<character<<endl;
    cout<<"strlen(character): "<<strlen(character)<<endl;
    cout<<"sizeof(character): "<<sizeof(character)<<endl; //same for both
    //cout<<"character.length(): "<<character.length()<<endl; <-- cannot be used for characters
    
    cout<<"Replacing one of the spaces with a null character"<<endl;
    character[4] = {'\0'};
    cout<<character<<endl;
    cout<<"strlen(character): "<<strlen(character)<<endl;
    cout<<"sizeof(character): "<<sizeof(character)<<endl;
    //cout<<"character.length(): "<<character.length()<<endl; <-- cannot be used for characters
}
void Enum()
{
    enum FarmAnimals
    {
        pig = 15,
        cow,
        horse,
        goat,
        chicken
    };
    
    cout<<"Once upon a time, a goat was given the number "<<goat<<endl;
    FarmAnimals avian = chicken;
    cout<<"...and the avian was assigned the number "<<avian<<endl;
}
