#include "./stdc++.h"
using namespace std;

void print()
{
    static int cnt = 0;

    if(cnt == 3)
    {
        return;
    }
    
    cout << cnt << endl;
    cnt++;
    print();
}
int main()
{
    print();

    return 0;
}