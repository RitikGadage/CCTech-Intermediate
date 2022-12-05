#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

string removeChar(string s, char c)
{
    if (c == '_' || c == '-' || c == '/')

        s.erase(remove(s.begin(), s.end(), c), s.end()); // removes characters from the string

    return s;
}
string removeExtentions(string s)
{
    s.assign(s.begin(), s.end() - (s.length() - s.find_last_of('.'))); // removes extension from the string (for eg .cpp , .js ,etc)

    return s;
}

string removeCharacters(string s)
{
    int p1 = s.find('.');
    if (p1 != string :: npos)
    {
        return s.substr(0, p1);
    }
    else
    {
        return s;
    }
}
string removeCharacter(string s)
{
    int p1 = s.find('_');
    if (p1 != string :: npos)
    {
        return s.substr(0, p1);
    }
    else
    {
        return s;
    }
}
string removeCharacte(string s)
{
    int p1 = s.find('-');
    if (p1 != string :: npos)
    {
        return s.substr(0, p1);
    }
    else
    {
        return s;
    }
}

int main()
{
    string s ;
    cout << "Enter the filename";
    getline (cin , s);

    string s1;
    if(s.find('/'))
    {
        string filename = s.substr(s.find_last_of("/\\") + 1);

        s1 = removeCharacters(removeExtentions(filename));
        s1 = removeCharacter(removeExtentions(filename));
        s1 = removeCharacte(removeExtentions(filename));
        

    }
 
    vector<string> a = { "test", "step" , "spec" , "tests" , "Tests" , "Test", "Spec" , "_" , "." , "-" } ;
    

    for (int i = 0; i < a.size(); i++)
    {
        auto n = s1.find(a[i]);
        if (n != string :: npos)
        {
            s1.erase(n, a[i].length());
        }
    }
   
    //cout << s1 << endl;    // getting name of main file

    string str;
    string s2;

    str = s;    //duplicating the main string 

   //removing extention and storing the string
   
   str = removeExtentions(s);

    int index = str.find(s1);
    int index01 = str.find_last_of(s1);

    int index2 = str.find(s1, index);
    int index3 = s1.length() + str.find(s1, index);
    cout << "Index of Filename : " << "[" << index2<< ","<< index3 << "]" << endl;


}    