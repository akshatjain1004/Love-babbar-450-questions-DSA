#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>

using namespace std;

bool find3Numbers(int A[], int n, int X)
{
    unordered_map<int, int> count;
    for (int i = 0; i < n; i++)
    {
        count[A[i]]++;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((X - A[i] - A[j] == A[i]) || (X - A[i] - A[j] == A[j]))
            {
                if (A[i] == A[j])
                {
                    if (count[X - A[i] - A[j]] > 2)
                    {
                        return true;
                    }
                    else
                    {
                        continue;
                    }
                }
                else
                {
                    if (count[X - A[i] - A[j]] > 1)
                    {
                        return true;
                    }
                    else
                    {
                        continue;
                    }
                }
            }
            else if (count[X - A[i] - A[j]] > 0)
            {
                return true;
            }
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    int n,x;
    cin>>n>>x;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    
    cout<<find3Numbers(A,n,x)<<endl;
    return 0;
}
