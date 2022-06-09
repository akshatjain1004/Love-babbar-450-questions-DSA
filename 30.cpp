#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long findMinDiff(vector<long long> a, long long n, long long m)
{
    sort(a.begin(), a.end());
    long long mini = a[n - 1] - a[0];
    for (long long i = 0; i <= n - m; i++)
    {
        mini = min(mini, a[i + m - 1] - a[i]);
    }
    return mini;
}

int main(int argc, char const *argv[])
{
    long long n,m;
    cin>>n;
    vector <long long> a;
    for (int i = 0; i < n; i++)
    {
        long long t;
        cin>>t;
        a.push_back(t);
    }
    cin>>m;
    cout<<findMinDiff(a,n,m);
    
    return 0;
}
