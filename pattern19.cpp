#include "./stdc++.h"
using namespace std;

void print19(int n)
{
    int spaces = 0;

    for(int i = 0; i < n; i++)
    {
        // stars
        for(int j = 0; j < n - i; j++)
        {
            cout << "*";
        }

        // spaces
        for(int j = 0; j < spaces; j++)
        {
            cout << " ";
        }

        // stars
        for(int j = 0; j < n - i; j++)
        {
            cout << "*";
        }

        spaces = spaces + 2;
        cout << endl;
    }

    int iniSpace = ( 2 * n ) - 2;

    for(int i = 0; i < n; i++)
    {
        //stars
        for(int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        // spaces 
        for(int j = 0; j < iniSpace; j++)
        {
            cout << " ";
        }

        // stars
        for(int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        iniSpace -= 2;
        cout << endl;
    }
}

int main()
{
    // 2 : test cases
    // 3 : for 3 * 
    // 5 : for 5 * 
    int testCases;
    cin >> testCases;

    for(int i = 0; i < testCases; i++)
    {
        int n;
        cin >> n;
        print19(n);
    }

    return 0;
}