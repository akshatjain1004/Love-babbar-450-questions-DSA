#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minCostClimbingStairs(vector<int> &cost)
{
    int n = cost.size();
    if (n < 3)
    {
        return min(cost[0], cost[1]);
    }
    int n2 = cost[n - 1];
    int n1 = cost[n - 2];
    int curr;
    for (int i = n - 3; i >= 0; i--)
    {
        curr = min(n1, n2) + cost[i];
        n2 = n1;
        n1 = curr;
    }
    return min(n1, n2);
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector <int> v;
    for (int i = 0; i < n; i++)
    {
        int r;
        cin>>r;
        v.push_back(r);
    }
    cout<<minCostClimbingStairs(v)<<'\n';
    return 0;
}
