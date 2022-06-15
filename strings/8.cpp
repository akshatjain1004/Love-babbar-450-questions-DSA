#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

bool isPalindrome(string S)
{
    int n;
    n = S.size();
    int j = n - 1;
    int i = 0;
    while (j >= i)
    {
        if (S[i] != S[j])
        {
            return false;
        }
        i++;
        j--;
    }

    return true;
}
string longestPalin(string S)
{
    int n = S.size();
    int maxi = 0;
    string ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            if (isPalindrome(S.substr(i, j)))
            {
                if (j > maxi)
                {
                    maxi = j;
                    ans = S.substr(i, j);
                }
            }
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{

    string s1;
    cin >> s1;
    cout << longestPalin(s1) << "\n";
    return 0;
}
