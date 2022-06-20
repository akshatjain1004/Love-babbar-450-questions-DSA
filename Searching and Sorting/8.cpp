#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int majorityElement(int arr[], int n)
{

    unordered_map<int, int> count;
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for (auto x : count)
    {
        if (x.second > n / 2)
        {
            return x.first;
        }
    }
    return -1;
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
    cout<<majorityElement(arr,n)<<'\n';
    
    return 0;
}
