#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

long long maxProduct(vector<int> arr, int n)
{
    long long int maxi = arr[0];
    long long int ans = arr[0];
    long long int mini = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < 0)
        {
            swap(maxi, mini);
        }
        maxi = max((long long int)arr[i], maxi * arr[i]);
        mini = min((long long int)arr[i], arr[i] * mini);
        ans = max(ans, maxi);
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector <int> arr;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin>>m;
        arr.push_back(m);
    }
    auto ans= maxProduct(arr,n);
    cout<<ans<<"\n";
    
    return 0;
}
