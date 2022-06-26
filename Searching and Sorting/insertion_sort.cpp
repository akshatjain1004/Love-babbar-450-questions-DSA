#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void insertionSort(vector<int>&arr){
    int n= arr.size();
    for(int i=1;i<n;i++){
        int curr= arr[i];
        int j=i-1;
        while(arr[j]>curr&&j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
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
    insertionSort(arr);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
