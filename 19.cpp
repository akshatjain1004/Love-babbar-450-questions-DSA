#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{
    int i, j, k;
    i = 0;
    j = 0;
    k = 0;
    vector<int> ce;

    while (i < n1 && j < n2 && k < n3)
    {
        if (A[i] == B[j] && A[i] == C[k])
        {
            if (A[i] == A[i - 1])
            {
                i++;
                continue;
            }
            if (B[j] == B[j - 1])
            {
                j++;
                continue;
            }
            if (C[k] == C[k - 1])
            {
                k++;
                continue;
            }
            ce.push_back(A[i]);
            i++;
            j++;
            k++;
        }
        else if (A[i] < B[j])
        {
            i++;
        }
        else if (B[j] < C[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }

    return ce;
}

int main(int argc, char const *argv[])
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int A[n1], B[n2], C[n3];
    for (int i = 0; i < n1; i++)
    {
        cin>>A[i];
    }

    for (int i = 0; i < n2; i++)
    {
        cin>>B[i];
    }

    for (int i = 0; i < n3; i++)
    {
        cin>>C[i];
    }

    vector<int> ce= commonElements(A,B,C,n1,n2,n3);
    for(int i=0;i<ce.size();i++){
        cout<<ce[i]<<" ";
    }
    
}
