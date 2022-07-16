#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        priority_queue <long long int, vector<long long int>, greater<long long int> > q;
        for(long long int i=0;i<n;i++){
            q.push(arr[i]);
        }
        long long int final=0;
        while(q.size()!=1){
            long long int ans=0;
            ans+= q.top();
            q.pop();
            ans+= q.top();
            q.pop();
            final+=ans;
            q.push(ans);
        }
        return final;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends