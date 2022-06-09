#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int minSwap(int arr[], int n, int k)
{
    int mini = n;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= k)
        {
            count++;
        }
    }
    int curr = 0;
    for (int i = 0; i < count; i++)
    {
        if (arr[i] > k)
        {
            curr++;
        }
    }
    mini = min(mini, curr);
    for (int i = 1; i <= n - count; i++)
    {
        if (arr[i - 1] > k)
        {
            curr--;
        }
        if (arr[i + count - 1] > k)
        {
            curr++;
        }
        mini = min(mini, curr);
    }

    return mini;
}

int main(int argc, char const *argv[])
{
    int n,x;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>x;
    cout<<minSwap(arr,n,x);
    return 0;
}
