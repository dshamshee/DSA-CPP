#include <iostream>
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
    cout<<"Hello i am here ";
    int left = 0, right = n - 1, fortwo = n - 1;
    
    while (left < right && left < fortwo)
    {
       
        while (arr[left] == 0 && left < right)
        {
            left++;
        }
        while (arr[right] == 1 && left < right  )
        {
            right--;
            
        }

        while (arr[fortwo] == 2 && left < fortwo)
        {
           // cout<<"Hello i am here now ";
            fortwo--;
        }

        // for i & j - when  i=1 & j=0 then
        if (arr[left] == 1 && arr[right] == 0 && left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
        // for left & fortwo - when left = 2 & fortwo = 0 then
        if (arr[left] == 2 && arr[fortwo] == 0 && left < fortwo)
        {
           // cout<<"Hello i am here now ";
            swap(arr[left], arr[fortwo]);
            left++;
            fortwo--;
        }

        // for right & fortwo - when right = 2 & fortwo = 1 then
        if (arr[right] == 2 && arr[fortwo] == 1 && right < fortwo)
        {
           // cout<<"Hello i am here now ";
            swap(arr[right], arr[fortwo]);
            right--;
            fortwo--;
        }
        
    }
}

int main()
{

    int arr[7] = {2, 0, 1, 2, 2, 0, 0};

    sortOne(arr, 7);
    printArray(arr, 7);

    return 0;
}

// This code is not complete now. 