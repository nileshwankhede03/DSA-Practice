#include "./stdc++.h"
using namespace std;

void print11(int size)
{
    int space = 6;

    for(int i = 1 ; i <= size; i++)
    {
        // Number 
        for(int j = 1 ; j <= i; j++)
        {
            cout << j;
        }
        // space
        for(int j = 1; j <= space; j++ )
        {
            cout << " ";
        }
        // Number
        for(int j = i ; j >= 1; j--)
        {
            cout << j;
        }
        space = space -= 2;
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