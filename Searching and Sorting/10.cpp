#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool findPair(int arr[], int n, int x)
{
    unordered_map<int, int> count;
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (x != 0)
        {
            if (count[arr[i] - x] > 0)
            {
                return true;
            }
        }
        else
        {
            if (count[arr[i] - x] > 1)
            {
                return true;
            }
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<findPair(arr,n,x)<<'\n';
    
    return 0;
}
