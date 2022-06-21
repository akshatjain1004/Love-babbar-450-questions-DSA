#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    int n = nums.size();

    sort(nums.begin(), nums.end());

    set<vector<int>> sv;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            for (int k = j + 1; k < n; k++)
            {

                int x = (long long)target -
                        (long long)nums[i] -
                        (long long)nums[j] - (long long)nums[k];

                if (binary_search(nums.begin() + k + 1, nums.end(), x))
                {
                    vector<int> v;
                    v.push_back(nums[i]);
                    v.push_back(nums[j]);
                    v.push_back(nums[k]);
                    v.push_back(x);
                    sort(v.begin(), v.end());
                    sv.insert(v);
                }
            }
        }
    }
    vector<vector<int>> res(sv.begin(), sv.end());
    return res;
}

int main(int argc, char const *argv[])
{
    int n,x;
    cin>>n>>x;
    vector <int> arr;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin>>t;
        arr.push_back(t);
    }
    auto ans= fourSum(arr,x);
    for(auto x: ans){
        for(auto y: x){
            cout<<y<<" ";
        }
        cout<<"$"<<" ";
    }
    return 0;
}
