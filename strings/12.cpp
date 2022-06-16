#include <iostream>
#include <string>

using namespace std;

int maxSubStr(string str)
{
    int n = str.size();
    int count = 0;
    int zeroes = 0;
    int ones = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '0')
        {
            zeroes++;
        }
        else if (str[i] == '1')
        {
            ones++;
        }
        if (zeroes == ones)
        {
            count++;
        }
    }
    if (count == 0 || zeroes != ones)
    {
        return -1;
    }
    else
    {
        return count;
    }
}

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<maxSubStr(s)<<'\n';
    }
    
    return 0;
}
