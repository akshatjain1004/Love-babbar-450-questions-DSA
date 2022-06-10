#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;
bool subArrayExists(int arr[], int n)
    {
        unordered_map <int,int> sums;
        int sum= arr[0];
        
        if(sum==0){
            return true;
        }
        sums[sum]++;
        for(int i=1;i<n;i++){
    
            sum+=arr[i];
            
            if(sum==0){
                return true;
            }
            sums[sum]++;
            if(sums[sum]>1){
                return true;
            }
        }
        if(sum==0){
            return true;
        }
        else{
            return false; 
        }
        
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
    bool temp= subArrayExists(arr,n);

    if(temp){
        cout<<"Yes";
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}
