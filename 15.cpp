#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void nextPermutation(vector<int> &nums)
{
    int n = nums.size();
    int index = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[n - i - 2] < nums[n - i - 1])
        {
            index = n - i - 2;
            break;
        }
    }
    if (index == -1)
    {
        reverse(nums.begin(), nums.end());
        return;
    }
    int j = n - 1;
    for (int i = n - 1; i >= index; i--)
    {
        if (nums[i] > nums[index])
        {
            j = i;
            break;
        }
    }
    swap(nums[index], nums[j]);
    reverse(nums.begin() + index + 1, nums.end());
    return;
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector <int> nums;
    for (int i = 0; i < n; i++)
    {
        int s;
        cin>>s;
        nums.push_back(s);
    }
    
    
    return 0;
}
