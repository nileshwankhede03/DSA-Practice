#include "./stdc++.h"
using namespace std;

void print8(int n)
{
    for(int i = 0; i < n; i++)
    {
        //space
        for(int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // star

        for(int k = 0; k < 2*n - (2*i + 1); k++)
        {
            cout << "*";
        }

        // space
        for(int m = 0; m < i; m++)
        {
            cout << " ";
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
        print8(n);
    }

    return 0;
}