#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void selectionSort(vector<int>&arr){
    int n= arr.size();
    for(int i=0;i<n;i++){
        int mini= i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);

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
    selectionSort(arr);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
