#include <iostream>
#include <algorithm>
#include "sort_string_by_length.h"
#include <stdlib.h>

using namespace std;

int main()
{
    string str[] = {"am" , "i" , "good" , "boy"};
    int n = 4;

    sort(str , str + n , compare);
    for(int i=0 ; i<n ; i++)
    {
        cout << str[i] << " ";
    }
}