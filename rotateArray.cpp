#include "./stdc++.h"
using namespace std;

// using extra space 
void rotateArrayByOnePlace(int * arr , int n)
{
    int temp[n];

    int j = 0;
    for(int i = 1; i <= n - 1 ; i++, j++)
    {
        temp[j] = arr[i];
    }
    temp[n - 1] = arr[0];
    
    for(int k = 0; k < n; k++)
    {
        cout << temp[k] << " ";
    }
}

// using without extra space 
void rotateArrayByOnePlaceX(int * arr , int n)
{
    int copy = arr[0];
    for(int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i+1] ;
    }

    arr[n - 1] = copy;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    rotateArrayByOnePlaceX(arr,5);

    cout << "\nDesired output is : " << "\n";
    for(int i = 0; i < 5 ; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}