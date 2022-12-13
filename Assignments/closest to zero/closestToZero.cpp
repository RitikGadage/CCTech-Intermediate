#include <iostream>
#include<algorithm>
#include <vector>

using namespace std;

void display(vector<int> &v)
{
    int i;
    for(i = 0; i < v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> listOfNumbers;
    int n , elements;

    cout<<"enter the size : ";
    cin >> n;

    for(int i = 1;i <= n; i++)
    {
        cout << "elements " <<": " ;
        cin >> elements;
        listOfNumbers.push_back(elements);
    }
    cout << endl;

    display(listOfNumbers);

    sort(listOfNumbers.begin(),listOfNumbers.end());

    for(int i=0; i<listOfNumbers.size(); i++)
	{
        if(listOfNumbers[i] > 0)
        {
            cout << listOfNumbers[i];
            break;
        }        	    
	}

    return 0;
}

