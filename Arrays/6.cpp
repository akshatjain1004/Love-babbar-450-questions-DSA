#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

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

    set <int> s;
    
    for (int i = 0; i < n; i++)
    {
        s.insert(arr1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        s.insert(arr2[i]);
    }
    cout<<s.size();
    
    
    return 0;
}
