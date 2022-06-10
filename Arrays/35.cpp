#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int find_median(vector<int> v)
{
    sort(v.begin(), v.end());
    int n = v.size();
    int ind;
    if (n % 2 == 0)
    {
        return (int)(v[(int)n / 2] + v[(int)n / 2 - 1]) / 2;
    }
    else
    {
        return v[(int)n / 2];
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector <int> arr;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin>>t;
        arr.push_back(t);
    }
    cout<<find_median(arr);
    
    return 0;
}
