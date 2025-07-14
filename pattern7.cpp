#include "./stdc++.h"
using namespace std;

void print7(int n)
{
    for(int i = 0; i < n; i++)
    {
        //space
        for(int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // star

        for(int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }

        // space
        for(int m = 0; m < n - i - 1; m++)
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
        print7(n);
    }

    return 0;
}