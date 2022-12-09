#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main (int argc, char *argv[] )
{
    for (int i = 1; i < argc; i++)
    {
        ifstream file(argv[i]);

        if (file.fail())
        {
            cout << "cat : " << "Error opening file" << endl;
        }

        string str;

        while (getline(file, str))
        {
            cout << str;
        }
    }

    return 0;
}