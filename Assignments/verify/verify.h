#include <iostream>

using namespace std;

#ifndef verify

#define verify(cond)\
    do{\
        if(!(cond))\
            cout << __FILE__ << ":" <<__LINE__ << ": error: In function " <<__FUNCTION__<< ", verification of condition "<< #cond << " failed." << endl ;\
    }while(0)

#endif