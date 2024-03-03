#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
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
    int even[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int odd[7] = {1, 2, 3, 4, 5, 6, 7};

    int result = binarySearch(even, 8, 9);
    cout << "indext of Element 5 is: " << result << endl;
    result = binarySearch(odd, 7, 3);
    cout << "indext of Element 3 is: " << result << endl;
    return 0;
}