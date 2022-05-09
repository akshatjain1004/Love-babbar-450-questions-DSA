#include <bits/stdc++.h>
using namespace std;




int main(int argc, char const *argv[])
{
    
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<arr[k]<<" "<<arr[n-k];
    

    return 0;
}
