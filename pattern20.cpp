#include "./stdc++.h"
using namespace std;

void print20(int n)
{
    int space = 2 * n - 2;
    
    for(int i = 1; i <= 2*n - 1; i++)
    {
        int stars = i;
        if(i > n) stars = 2*n - i;

        // stars
        for(int j = 1; j <= stars; j++)
        {
            cout << "*";
        }

        // spaces
        for(int j = 1; j <= space;j++)
        {
            cout << " ";
        }
        // stars
        for(int j = 1; j <= stars; j++)
        {
            cout << "*";
        }

        cout << endl;
        if(i < n) space -= 2;
        else space += 2;
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
        print20(n);
    }

    return 0;
}