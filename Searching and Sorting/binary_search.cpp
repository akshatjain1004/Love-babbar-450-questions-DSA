#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int find(int arr[], int n, int x)
{
   
   int i=0;
   int j=n;
   while(i<=j){
    int mid= (i+j)/2;

    if(arr[mid]==x){
        return mid;
    }
    else if(arr[mid]<x){
        i=mid+1;
    }
    else if(arr[mid]>x){
        j=mid-1;
    }
    
   } 
    return -1;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    auto ans= find(a,n,x);
    cout<<ans<<'\n';
    return 0;
}
