#include "./stdc++.h"
using namespace std;

void print15(int n)
{
    for(int i = 0; i < n; i++)
    {
        //space
        for(int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // characters
        char ch = 'A';
        int breakPoint = (2*i+1)/2;
        for(int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch;
            if(j <= breakPoint) ch++;
            else ch--;
        }

        // space
        for(int j = 0; j < n - i - 1; j++)
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
        print15(n);
    }

    return 0;
}