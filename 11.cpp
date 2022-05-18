#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &nums)
{
    int n = nums.size() - 1;
    int bre = 0;
    sort(nums.begin(), nums.end());
    for (int i = 0; i <= n; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            bre = nums[i];
            break;
        }
    }
    return bre;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector <int> nums;
    for(int i=0;i<=n;i++){
        cin>>nums[i];
    }
    cout<<findDuplicate(nums);
    return 0;
}
