#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int findLongestConseqSubseq(int arr[], int n)
    {
      sort(arr,arr+n);
      int ans=1;
      int count=1; 
      for(int i=0;i<n-1;i++){
          if(arr[i+1]-arr[i]==1){
              count++;
          }
          else if(arr[i+1]-arr[i]==0){
              continue;
          }
          else{
              count=1;
          }
          ans= max(ans,count);
      }
      return ans;
    }

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    auto ans= findLongestConseqSubseq(arr,n);
    cout<<ans<<"\n";
    
    return 0;
}
