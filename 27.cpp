#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map <int,int> m1;
    for(int i=0;i<n;i++){{
        m1[a1[i]]++;
    }}
    bool temp= true;
    for(int i=0;i<m;i++){
        if(m1[a2[i]]>0){
            continue;
        }
        else{
            temp= false;
            return "No";
        }
    }
    if(temp){
        return "Yes";
    }
}

int main(int argc, char const *argv[])
{
    int n,m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>arr2[i];
    }
    cout<<isSubset(arr1,arr2,n,m)<<"\n";
    return 0;
}
