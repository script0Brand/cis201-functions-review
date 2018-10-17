/*
    File Name: main.cpp
    Description: This function checks the characters in a string
                 and returns the number of times the character 'a',
                 lower of upper case shows on the string.
    Author: Byron Perez
    email: byronp1779@student.vvc.edu
    Date: 0ct. 16, 2018
*/


#include<iostream>
#include<string>

using namespace std;

string s = "Apple valley CA is an American town";
int count = 0;
char c = 'a';
char C = 'A';

int total(string s);


int main()
{
    cout << total(s) << endl;

    return 0;
}


/**
    This function checks the number of times the letter 'a' shows 
    in a string.
*/

int total(string s)
{
    for(int i = 0; i < s.length(); i++)
    {
        if(s.at(i) == c || s.at(i) == C)
            count++;            
    }
    return count;
}



















