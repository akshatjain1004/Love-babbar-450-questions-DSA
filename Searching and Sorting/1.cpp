#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> find(int arr[], int n, int x)
{
    int i = 0;
    int j = n - 1;
    while (arr[i] != x && i < n)
    {
        i++;
    }
    while (arr[j] > x && j >= 0)
    {
        j--;
    }
    if (i == n)
    {
        i = -1;
        j = -1;
    }
    vector<int> ans;
    ans.push_back(i);
    ans.push_back(j);
    return ans;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    auto ans= find(a,n,x);
    cout<<ans[0]<<" "<<ans[1]<<'\n';
    return 0;
}
