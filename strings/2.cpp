#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int isPalindrome(string S)
{
    int n;
    n = S.size();
    int j = n - 1;
    int i = 0;
    while (j >= i)
    {
        if (S[i] != S[j])
        {
            return 0;
        }
        i++;
        j--;
    }

    return 1;
}

int main(int argc, char const *argv[])
{
    string s;
    cin>>s;
    cout<<isPalindrome(s)<<'\n';
    return 0;
}
