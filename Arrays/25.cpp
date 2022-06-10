#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

void maxCount(vector <int> arr, int n, int k){
    unordered_map <int,int> count;
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(auto i: count){
        if(i.second>n/k){
            cout<<i.first<<" ";
        }
    }
}

int main(int argc, char const *argv[])
{
    int n,k;
    cin>>n>>k;
    vector <int> arr;
    for (int i = 0; i < n; i++)
    {
        int r;
        cin>>r;
        arr.push_back(r);
    }
    maxCount(arr,n,k);
    
    return 0;
}
