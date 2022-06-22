#include <iostream>
#include <algorithm>

using namespace std;

void merge(int arr1[], int arr2[], int n, int m)
{
    int i = n - 1;
    int j = 0;
    while (arr1[i] >= arr2[j] && i >= 0 && j < m)
    {
        swap(arr1[i], arr2[j]);
        i--;
        j++;
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}

int main(int argc, char const *argv[])
{
    int n,m;
    cin>>n>>m;
    int arr1[n],arr2[m];
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>arr2[i];
    }
    merge(arr1,arr2,n,m);
    for (int i = 0; i < n; i++)
    {
        cout<<arr1[i]<<" ";
    }
    for (int i = 0; i < m; i++)
    {
        cout<<arr2[i]<<" ";
    }
    
    return 0;
}
