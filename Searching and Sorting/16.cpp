#include <iostream>
#include <vector>

using namespace std;

vector<long long int> productExceptSelf(vector<long long int> &nums, int n)
{

    long long int prod = 1;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            prod *= nums[i];
        }
        else if (nums[i] == 0)
        {
            count++;
        }
    }
    vector<long long int> ans;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0 && count > 0)
        {
            ans.push_back(0);
        }
        else if (count == 0)
        {
            ans.push_back(prod / nums[i]);
        }
        else if (nums[i] == 0 && count == 1)
        {
            ans.push_back(prod);
        }
        else
        {
            ans.push_back(0);
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector <long long int> nums;
    for (int i = 0; i < n; i++)
    {
        long long int t;
        cin>>t;
        nums.push_back(t);
    }
    auto ans= productExceptSelf(nums,n);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
