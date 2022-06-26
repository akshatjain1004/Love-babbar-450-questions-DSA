#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>&arr){
    int n= arr.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
            }
        }
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
    bubbleSort(arr);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
