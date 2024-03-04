#include <iostream>
using namespace std;

void pairsum(int arr[], int n, int sum)
{
    cout << "Triplet Sum:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == sum)
                {

                    cout << arr[i] << " + " << arr[j] << " + " << arr[k] << " = " << sum << endl;
                    // vector<int> temp;
                    // temp.push_back(min(arr[i], arr[j]));
                    // temp.push_back(max(arr[i], arr[j]));
                    // ans.push_back(temp);
                }
            }
        }
    }
}

int main()
{

    int arr[7] = {1, 1, 2, 7, 3, 6, 7};

    // printArray(arr, 5);
    pairsum(arr, 7, 4);

    return 0;
}