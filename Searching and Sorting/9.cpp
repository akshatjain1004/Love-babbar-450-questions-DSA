#include <iostream>
#include <algorithm>

using namespace std;

int search(int arr[], int n, int x, int k)
{
    int diff;
    int i=0;
    while(i<n){
        diff= x-arr[i];
        if(arr[i]==x){
            return i;
        }
        i+= max(1, abs(diff)/k);
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int k,x;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>x;
    cout<<search(arr,n,x,k)<<'\n';
    return 0;
}
