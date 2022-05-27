#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;
void getPairsCount(int arr[], int n)
{
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]>0 && arr[j]<0){
            swap(arr[i],arr[j]);
            i++;
            j--;
            continue;
        }
        else if(arr[i]>0 && arr[j]>0){
            j--;
            continue;
        }
        else if(arr[i]<0 && arr[j]<0){
            i++;
            continue;
        }
        else{
            i++;
            j--;
        }
    }
    cout<<i<<endl;
    int count=i;
    j=count;
    i=1;
    while(arr[i]<0 && j<n){
        swap(arr[i],arr[j]);
        i+=2;
        j+=2;
    }
    

}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    getPairsCount(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
    
    return 0;
}
