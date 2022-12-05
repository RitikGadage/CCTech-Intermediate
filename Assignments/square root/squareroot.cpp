#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num;
    float result;
    cout << "Enter number: ";
    cin >> num;

    try
    {
        if(num == 0 )
        throw num;

        else if( num < 0 )
        throw num;

        else
        {
            result = pow(num,0.5);
            cout << "square root of " << num << " is " << result;
        }
    }

    catch(int x)
    {
        cout << "cant use this number " << x;
    }

    return 0;
        
}