#include <iostream>
using namespace std;

int getpivot(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int binarySearch(int arr[], int start, int end, int key)
{
    // int start = 0, end = size - 1;
    int mid = start + (end - start) / 2; // it means (start+end)/2

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int arr[6]={4,7,9,1,2,3};
    int n= 6;
    int target = 7;
    int Pivot = getpivot(arr, n);
    if(target >= arr[Pivot] && target <= n-1)
    {
       cout<<"Element is: "<< binarySearch(arr, Pivot, n-1, 7)<<endl;
    }
    else
    {
       cout<<"Element is: "<< binarySearch(arr, 0, Pivot-1, 7)<<endl;
    }

    return 0;
}