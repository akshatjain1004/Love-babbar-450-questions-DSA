#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int smallestSubWithSum(int arr[], int n, int x)
{

    vector<int> counts;
    for (int i = 0; i < n; i++)
    {
        int sum = arr[i];
        int count = 1;
        while (sum < x && ((i + count) < n))
        {
            sum += arr[i + count];
            count++;
        }
        if (sum > x)
        {
            counts.push_back(count);
        }
    }
    int mini = n;
    for (int i = 0; i < counts.size(); i++)
    {
        mini = min(counts[i], mini);
    }
    return mini;
}
int main(int argc, char const *argv[])
{
    int n,x;
    cin>>n>>x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<smallestSubWithSum(arr,n,x);
        
    return 0;
}
