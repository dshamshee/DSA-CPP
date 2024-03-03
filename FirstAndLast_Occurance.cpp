#include <iostream>
using namespace std;
// code is aplicable only for shorted array in ascending order.
int firstoccu(int arr[], int n, int key)
{
    int s = 0, e = n - 1, ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastoccu(int arr[], int n, int key)
{
    int s = 0, e = n - 1, ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    // code is aplicable only for shorted array in ascending order.
    int arr[8] = {1, 2, 3, 3, 3, 3, 7, 8};
    int total = (lastoccu(arr, 8, 6) - firstoccu(arr, 8, 6)) + 1;  // Total number of Occurence 
    cout << "First Occurence of 6 at index " << firstoccu(arr, 8, 6) << endl;
    cout << "Last Occurence of 6 at index " << lastoccu(arr, 8, 6) << endl;
    cout << "Total number of Occurence is: " << total << endl;

    return 0;
}