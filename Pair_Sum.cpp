#include <iostream>
using namespace std;

void pairsum(int arr[], int n, int sum)
{
    cout<<"Pair Sum:"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                
                cout << arr[i] << " + " << arr[j] << " = " << sum << endl;
                // vector<int> temp;
                // temp.push_back(min(arr[i], arr[j]));
                // temp.push_back(max(arr[i], arr[j]));
                // ans.push_back(temp);
            }
        }
    }
}

int main()
{

    int arr[7] = {1, 2, 3, 7, 2, 6, 4};

    // printArray(arr, 5);
pairsum(arr, 7, 4);

    return 0;
}