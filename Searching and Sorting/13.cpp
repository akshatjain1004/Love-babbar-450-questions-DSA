#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

long long countTriplets(long long arr[], int n, long long sum)
{
    sort(arr, arr + n);
    long long count = 0;
    for (int i = 0; i < n - 2; i++)
    {
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            if (arr[i] + arr[j] + arr[k] >= sum)
            {
                k--;
            }
            else
            {
                count += k - j;
                j++;
            }
        }
    }
    return count;
}

int main(int argc, char const *argv[])
{
    int n, k;
    cin>>n>>k;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<countTriplets(arr,n,k);
    return 0;
}
