#include <iostream>
#include <cassert>

using namespace std;

bool checkLeapYear(int year)
{
    if (year <= 0)
    {
        return false;
    }

    if (year % 100 == 0)
        return false;
  
    if (year % 400 == 0)
        return true;
 
    if (year % 4 == 0)
        return true;

    return false;
}


int main()
{
    assert(!checkLeapYear(0));
    assert(checkLeapYear(2020));
    assert(!checkLeapYear(100));
    assert(!checkLeapYear(200));
    assert(!checkLeapYear(-2000));

    cout << "All test cases passed." << endl;
   
    
    return 0;
}