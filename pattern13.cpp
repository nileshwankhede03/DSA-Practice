#include "./stdc++.h"
using namespace std;

void print11(int n)
{
    int Number = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << Number << " ";
            Number = Number + 1;
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
        print11(n);
    }

    return 0;
}