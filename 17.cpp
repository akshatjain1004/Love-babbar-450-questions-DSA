#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(int arr[],int n ) {
        int minPr= arr[0];
        int profit=0;
        int dif=0;
        for(int i=0;i<n;i++){
            minPr= min(arr[i],minPr);
            dif= arr[i]-minPr;
            profit= max(profit,dif);
        }
        return profit;
    }

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxProfit(arr,n);
    
    
    return 0;
}
