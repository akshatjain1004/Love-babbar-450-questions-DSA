#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solve(vector<int> &nums, int s){
    int n= nums.size();
    if(s==n-1 || s==n-2){
        return nums[s];
    }
    
    int maxi= 0;
    for(int i=s+2;i<n;i++){
        maxi= max(maxi, nums[s]+ solve(nums,i));
    }
    return maxi;
}

int dp1(vector<int> &nums){
    int n= nums.size();
    vector <int> dp(n,-1);
    dp[0]= nums[0];
    for(int i=1;i<n;i++){
        int incl= dp[i-2]+ nums[i];
        int excl= dp[i-1];
        dp[i]= max(incl,excl);
    }
    return dp[n-1];
}

int dp2(vector<int> &nums){
    int n= nums.size();
    int prev= 0;
    int next= nums[0];
    int curr;
    for(int i=1;i<n;i++){
        int incl= prev+ nums[i];
        int excl= next;
        curr= max(incl,excl);
        prev= excl;
        next= curr;
    }
    return next;
}

int maximumNonAdjacentSum(vector<int> &nums){
//     int ans=0;
//     for(int i=0;i<nums.size();i++){
//         ans= max(ans,solve(nums,i));
//     }
//     return ans;
    return dp2(nums);
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int r;
        cin>>r;
        v.push_back(r);
    }
    cout<<maximumNonAdjacentSum(v)<<'\n';
    return 0;
}
