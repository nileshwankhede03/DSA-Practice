#include "./stdc++.h"
using namespace std;

void print14(int n)
{
    
    for(int i = 1; i <= n;i++)
    {
        char ch = 'A';
        for(int j = 1; j <= i;j++,ch++)
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
        print14(n);
    }

    return 0;
}