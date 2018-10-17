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

int total(string s)
{
    for(int i = 0; i < s.length(); i++)
    {
        if(s.at(i) == c || s.at(i) == C)
            count++;            
    }
    return count;
}



















