#include <iostream>
#include <algorithm>

using namespace std;

int minJumps(int arr[], int n){
    int steps=0;
    int desti=0;
    int pos=0;
    for(int i=0;i<n-1;i++){
        desti= max(desti, i+arr[i]);
        if(pos==i){
            pos= desti;
            steps++;
            if(arr[i]==0 && desti<n-1){
                return -1;
            }
        }
    }
    return steps;
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
    cout<<minJumps(arr,n);
    
    return 0;
}
