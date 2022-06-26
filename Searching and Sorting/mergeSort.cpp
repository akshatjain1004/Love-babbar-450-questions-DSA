#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector  <int> merge(vector<int>&arr1, vector<int>&arr2){
    vector <int> ans;
    int i= 0;
    int j=0;
    int n= arr1.size();
    int m= arr2.size();
    while(i<arr1.size() || j<arr2.size()){
        if(i<n &&arr1[i]<arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }
        else if(j<m && arr2[j]<=arr1[i]){
            ans.push_back(arr2[j]);
            j++;
        }
        else if(i>=n){
            ans.push_back(arr2[j]);
            j++;
        }
        else{
            ans.push_back(arr1[i]);
            i++;
        }
    }
    return ans;
}

vector<int> mergeSort(vector<int>&arr){
    int n= arr.size();
    if(n==1){
        return arr;
    }
    else{
        int mid= n/2;
        vector <int> arr1;
        for(int i=0;i<mid;i++){
            arr1.push_back(arr[i]);
        }
        arr1= mergeSort(arr1);
        vector <int> arr2;
        for(int i=mid;i<n;i++){
            arr2.push_back(arr[i]);
        }
        arr2= mergeSort(arr2);
        auto ans= merge(arr1,arr2);
        return ans;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int r;
        cin>>r;
        arr.push_back(r);
    }
    arr= mergeSort(arr);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
