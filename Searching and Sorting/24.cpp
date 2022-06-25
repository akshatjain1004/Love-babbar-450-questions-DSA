#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        // for(int i=0;i<n;i++){
        //     cout<<arr[i]<<" ";
        // }
        int d[n-1];
        for(int i=1;i<n;i++){
            d[i-1]= arr[i]-arr[i-1];
        }
        sort(d,d+n-1);
        for(int i=0;i<n-1;i++){
            cout<<d[i]<<" ";
        }
        // int ans=0;
        // for(int i=n-c-1;i<n-1;i++){
        //     ans+=d[i];
        // }
        cout<<d[n-c];
        // cout<<ans<<'\n';

    }    
    return 0;
}
