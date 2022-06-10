#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;
int getPairsCount(int arr[], int n, int k)
{
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    int temp;
    int pairs = 0;
    for (int i = 0; i < n; i++)
    {
        temp = k - arr[i];
        if (freq.count(temp) != 0 && temp != arr[i])
        {
            pairs += freq[temp];
        }
        else if (freq.count(temp) != 0)
        {
            pairs += freq[temp] - 1;
        }
    }
    pairs = pairs / 2;
    return pairs;
    // code here
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<< getPairsCount(arr,n,k);
    return 0;
}
