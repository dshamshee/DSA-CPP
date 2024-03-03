#include<iostream>
using namespace std;


void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"";
    }
}

int findDuplicate(int arr[], int size) 
{
    // Write your code here
    int ans=0;
        for(int i=0; i<size; i++)
        {
            ans=ans^arr[i];
        }

        for(int i=0; i<size; i++)
        {
            ans=ans^i;
        }
        return ans;
}
int main()
{
int arr[5]={1,4,3,4,2};

    int ans = findDuplicate(arr, 5);
    cout<<ans<<"";
   // printArray(arr, 5);

    return 0;
}