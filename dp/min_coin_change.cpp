#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
 
using namespace std;

int dp1(vector<int> &num, int x){
    int n= num.size();
    vector <int> dp(x+1,INT_MAX);
    
    dp[0]=0;
    for(int i=1;i<=x;i++){
        for(int j=0;j<n;j++){
            if(i-num[j]>=0 && dp[i-num[j]]!=INT_MAX){
                dp[i]= min(dp[i],1+dp[i-num[j]]);
            }
        }
    }
    return dp[x];
}
int minimumElements(vector<int> &num, int x)
{
    int ans= dp1(num,x);
    if(ans!=INT_MAX){
        return ans;
    }
    return -1;
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
    int x;
    cin>>x;
    cout<<minimumElements(v,x)<<'\n';
    
    return 0;
}
