#include "./stdc++.h"
using namespace std;

// step 4 apply honar symmetry aahe so half karun solve karaycha.
// what learn? stars : jevha symmetry madhe eka loop madhe 2 time value change karaychi asen tevha ti specific value EXTRA VARIABLE madhe store karaychi.
void print8(int size)
{
    for(int i = 1; i <= size*2 - 1; i++)
    {
        int updated = i;

        if(i > size)    
        {
            updated = (2 * size) - i;
        }
        
        for(int j = 1; j <= updated; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
}

int main()
{
    // 2 : test cases
    // 3 : for 3 * 
    // 5 : for 5 * 
    int testCases = 0;
    cin >> testCases;

    for(int i = 0; i < testCases; i++)
    {
        int n;
        cin >> n;
        print8(n);
    }

    return 0;
}