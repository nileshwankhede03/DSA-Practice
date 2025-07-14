#include "./stdc++.h"
using namespace std;

void print6(int n)
{
    for(int i = 0; i < n; i++)
    {
        // space
        for(int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // star
        for(int j = 0; j < 2 * i + 1; j++)
        {
            cout << " *";
        }

        // space
        for(int j = 0; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    cout << endl;
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
        print6(n);
    }

    return 0;
}