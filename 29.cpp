#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long trappingWater(int arr[], int n)
{
    long long int sum = 0;
    int le = arr[0];

    int left[n];
    for (int i = 0; i < n; i++)
    {
        le = max(le, arr[i]);
        left[i] = le;
    }
    int ri = arr[n - 1];
    int right[n];
    for (int i = n - 1; i >= 0; i--)
    {
        ri = max(ri, arr[i]);
        right[i] = ri;
    }
    for (int i = 0; i < n; i++)
    {
        sum += min(right[i],left[i])-arr[i];
    }
    return sum;
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<trappingWater(arr,n)<<"\n";
    return 0;
}
