#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minSwaps(vector<int> &nums)
{
    int c = 0;
    int n = nums.size();
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        pair<int, int> t = {nums[i], i};
        v.push_back(t);
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < nums.size(); i++)
    {
        if (i == v[i].second)
        {
            continue;
        }
        else
        {
            c++;
            swap(v[i], v[v[i].second]);
            i--;
        }
    }
    return c;
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector <int> nums;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        nums.push_back(t);
    }
    cout<<minSwaps(nums)<<'\n';
    return 0;
}
