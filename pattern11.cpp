#include "./stdc++.h"
using namespace std;

void print11(int size)
{
    for(int i = 1; i <= size; i++)
    {
        int start = 1;
        if(i % 2 == 0)
        {
            start = 0;
        }
        else
        {
            start = 1;
        }
        for(int j = 1; j <= i; j++)
        {
            cout << start << " ";
            start = 1 - start;
        }
        cout << "\n";
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