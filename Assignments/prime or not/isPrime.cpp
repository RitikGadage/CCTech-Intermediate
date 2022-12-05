#include <iostream>
#include <cassert>

bool isPrime( int number )
{
    if (number < 0)
    {
        return false;
    }
    if ( number == 0 || number == -1)
    {
        return false;
    }
    else if ( number == 2)
    {
        return true;
    }
    else{
        for( int i = 2 ; i < number ; ++i)
    {
        if(number % i == 0 )
        {
            return false;
        }
    }
    }
    
    return true;
}

using namespace std;

int main()
{
    /*
    int num;
    cout << "Enter a number = " ;
    cin >> num;
    bool ans;
    ans = isPrime(num);
    cout << ans;      //returns 0 if false and 1 if true
    
    */
        
// Test cases for program 

    assert (isPrime(0) == false);
    assert (isPrime(-1) == false);
    assert (isPrime(3) == true);
    assert (isPrime(4) == false);
    assert (isPrime(10) == false);
    assert (isPrime(11) == true);
    assert (isPrime(20) ==  false);

    cout << "all test cases passed" << endl;
}