#include <iostream>
#include <algorithm>

using namespace std;

int kthElement(int arr1[], int arr2[], int n, int m, int k)
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
    if (k <= n)
    {
        return arr1[k - 1];
    }
    else if (k > n && k <= n + m)
    {
        return arr2[k - n - 1];
    }
    else
    {
        return -1;
    }
}

int main(int argc, char const *argv[])
{
    int n,m,k;
    cin>>n>>m>>k;
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    cout<<kthElement(arr1,arr2,n,m,k)<<'\n';
    return 0;
}
