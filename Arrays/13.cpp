#include <iostream>
#include <algorithm>

using namespace std;

long long maxSubarraySum(int arr[], int n){
        int sum=arr[0];
        int maxsum=arr[0];
        for(int i=1;i<n;i++){
            sum= max(sum+ arr[i],arr[i]);
            maxsum= max(maxsum,sum);
        }
        return maxsum;
        
    }

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<maxSubarraySum(arr,n);
    return 0;
}
