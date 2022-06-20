// { Driver Code Starts
//Initial template for C++

#include <iostream>
#include <algorithm>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int middle(int A, int B, int C){
        int temp= max(A,B);
        int mini= min(A,B);
        if(max(temp,C)==temp){
            return max(mini,C);
        }
        else{
            return temp;
        }
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A,B,C) <<"\n";
    }
    return 0;
}  // } Driver Code Ends