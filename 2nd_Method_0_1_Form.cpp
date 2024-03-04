#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOne(int arr[], int n)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        if (arr[left] == 0)
        {
            left++;
        }
        else
        {
            swap(arr[left], arr[right]);
            right--;
        }
    }
}

int main()
{
    // int x, y;
    // x=INT_MIN;
    // y=INT_MAX;
    // cout<<"Minimum value of an Integer:"<<x<<endl;
    // cout<<"Maxmimum value of an Integer:"<<y<<endl;

    int arr[8] = {0, 1, 0, 1, 0, 0, 1, 0};
    sortOne(arr, 8);
    printArray(arr, 8);

    return 0;
}