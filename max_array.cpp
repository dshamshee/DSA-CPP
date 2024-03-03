#include<iostream>
using namespace std;

int  max(int arr[], int n)

{
    int maxx=arr[0];
    int seclg= INT_MIN;
    int min = arr[0];


    for(int i=1; i<n; i++)
    {
        
        if(maxx < arr[i]){
            maxx = arr[i];
        }

    
    }
    for (int  i = 0; i < n; i++)
    {
        if(arr[i] == maxx)
        {
            continue;
        }
        else
        {
            if(arr[i] > seclg)
            {
                seclg= arr[i];
            }
        }

    }
    return seclg;
    
    // cout << "maxi " << maxx << endl;
    // cout << "min " << min << endl;
}
int main()
{
int arr[6]={78, 23, 100};
   cout << "second larg " <<  max(arr, 3);    

    return 0;
}