#include "./stdc++.h"
using namespace std;

void print15(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch << " ";
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
        print15(n);
    }

    return 0;
}