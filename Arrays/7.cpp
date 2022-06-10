#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int op[n];

    for (int i = 0; i < n; i++)
    {
        op[i]= arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        arr[i]= op[(n+i-1)%n];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
    return 0;
}
