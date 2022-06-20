#include <iostream>
#include <algorithm>

using namespace std;

int find(int arr[],int n,int x){
    int i=0;
    int j=n;
    int mid1,mid2;
    while(j>=i){
        mid1= i+ (j-i)/3;
        mid2= j- (j-i)/3;
        if(arr[mid1]==x){
            return mid1;
        }
        else if(arr[mid2]==x){
            return mid2;
        }
        else if(x<arr[mid1]){
            j= mid1-1;
        }
        else if(x>arr[mid2]){
            i= mid2+1;
        }
        else{
            i= mid1+1;
            j= mid2-1;
        }
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<find(arr,n,x)<<'\n';
    return 0;
}
