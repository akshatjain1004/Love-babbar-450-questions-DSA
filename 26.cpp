#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int maxProfit(vector<int>&arr){
    int n= arr.size();
    int buy1= arr[0];
    int buy2= arr[0];
    int pr1=0;
    int pr2=0;
    for(int i=1;i<n;i++){
        buy1= min(buy1,arr[i]);
        pr1= max(pr1,arr[i]-buy1);
        buy2= min(buy2,arr[i]-pr1);
        pr2= max(pr2, arr[i]-buy2);
    }
    return pr2;
    
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector <int> arr;
    for (int i = 0; i < n; i++)
    {
        int r;
        cin>>r;
        arr.push_back(r);
    }
    auto ans= maxProfit(arr);
    cout<<ans<<"\n";
    return 0;
}
