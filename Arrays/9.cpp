#include <iostream>
#include <algorithm>

using namespace std;

int getMinDiff(int arr[], int n, int k) {
        sort(arr,arr+n);
        int ma= arr[n-1];
        int mi= arr[0];
        int res= ma-mi;
        for(int i=1;i<n;i++){
            if(arr[i]-k<0){
                continue;
            }
            ma= max(arr[i-1]+k,arr[n-1]-k);
            mi= min(arr[i]-k,arr[0]+k);
            res= min(ma-mi,res);
            
        }
        return res;
    }

int main(int argc, char const *argv[])
{
    int k;
    cin>>k;
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<getMinDiff(arr,n,k);
    return 0;
}
