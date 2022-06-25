#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool isPossible(int arr[],int n,int c,int mid){
    int cows=1;
    int last=0;
    for(int i=0;i<n;i++){
        if(arr[i]-arr[last]>=mid){
            cows++;
            if(cows==c){
                return true;
            }
            last=i;

        }
    }
    return false;
    
}
int cows(int arr[], int n, int c)
{
    sort(arr, arr + n);
    int s= 0;
    int e= arr[n-1];
    int ans;
    int mid= s+(e-s)/2;
    while(s<=e){
        
        if(isPossible(arr,n,c,mid)){
            ans= mid;
            s=mid+1;
        }
        else{
            e= mid-1;
        }
        mid= s+(e-s)/2;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout<<cows(arr,n,c)<<"\n";
    }
    return 0;
}
