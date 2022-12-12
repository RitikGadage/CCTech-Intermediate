#include <iostream>
#include <math.h>
#include <cassert>

using namespace std;

class simpleInterest 
{
    public:
    int year;
    float rate, principle;
    float getSimpleInterest(int y, float r, float p)
    {
        year = y;
        rate = r;
        principle = p;
        return (float)(principle * rate * year) / 100;
    }
};

int main()
{
    simpleInterest s;
    assert(s.getSimpleInterest(1, 1.5, 10000) != 300);
    assert(s.getSimpleInterest(1, 5.5, 20000) == 1100);
    assert(s.getSimpleInterest(3, 3.5, 40000) == 4200);

    cout << "All Test Cases Passed ";
    return 0;
}