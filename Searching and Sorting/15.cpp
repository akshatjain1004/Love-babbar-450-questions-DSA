// { Driver Code Starts
//Initial function template for C++


#include <iostream>
#include<vector>
#include <unordered_map>
using namespace std;
#define ll long long

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
        ll sum=0;
        int count=0;
        unordered_map <ll,int> num;
        num[0]=1;
        for(int i=0;i<n;i++){
          sum+=arr[i];
          num[sum]++;
        }
        for(auto x:num){
            int c= x.second;
            count+= c*(c-1)/2;
        }
        return count;
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<ll> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}  // } Driver Code Ends