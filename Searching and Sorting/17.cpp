#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>

using namespace std;

int naive_popcount(int n)
{
    string binary = bitset<sizeof(int)>(n).to_string();
    int s = binary.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (binary[i] == '1')
        {
            count++;
        }
    }
    return count;
}

static bool comparison(int a, int b)
{
    // return naive_popcount(a) > naive_popcount(b);
    return __builtin_popcount(a)> __builtin_popcount(b);
}
void sortBySetBitCount(int arr[], int n)
{
    sort(arr,arr+n,comparison);
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortBySetBitCount(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
