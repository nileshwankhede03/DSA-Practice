#include "./stdc++.h"
using namespace std;

void print1(int n)
{
    for(int i = 1; i <= n; i++ ) // i : indicates index of rows
    {
        for(int j = 1; j <= i; j++) // j : indicates index of columns.
        {
            cout << i << " "; // static i so print i.
        }
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
        print1(n);
    }

    return 0;
}