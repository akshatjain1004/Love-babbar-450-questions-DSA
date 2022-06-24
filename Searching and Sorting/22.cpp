#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int pivot(vector <int> &arr){
    int n;
    n=arr.size();
    int i=0;
    int j=n-1;
    while(i<=j){
        int mid= (i+j)/2;
        if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1]){
            return arr[mid];
        }
        else if(arr[mid]>arr[i]){
            i=mid;
        }
        else{
            j=mid;
        }
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        arr.push_back(t);
    }
    cout<<pivot(arr)<<'\n';
    return 0;
}
