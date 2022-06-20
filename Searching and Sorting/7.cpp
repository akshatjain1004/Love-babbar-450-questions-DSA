#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> findTwoElement(int arr[], int n)
{
    unordered_map<int, int> count;
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        count[i]++;
    }
    vector<int> ans;
    for (auto x : count)
    {
        if (x.second == 3)
        {
            ans.push_back(x.first);
        }
    }
    for (auto x : count)
    {
        if (x.second == 1)
        {
            ans.push_back(x.first);
        }
    }
    return ans;
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
    auto ans= findTwoElement(arr,n);
    cout<<ans[0]<<" "<<ans[1]<<"\n";
    return 0;
}
