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

void rightRotateArrayByOnePlace(int * arr , int n)
{
    int temp[n];

    int j = 1;
    for(int i = 0; i < n; i++)
    {
        temp[j] = arr[i];
        j++;
    }

    temp[0] = arr[n-1];

    for(int i = 0; i < 5 ; i++)
    {
        cout << temp[i] << " ";
    }
}

// by GPT
void rightRotateArrayByOnePlaceXX(int* arr, int n)
{
    // Save the last element
    int last = arr[n - 1];

    // Shift all elements one position to the right
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Put the last element at the first position
    arr[0] = last;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    rightRotateArrayByOnePlaceXX(arr,5);

    cout << "\nDesired output is : " << "\n";
    for(int i = 0; i < 5 ; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}