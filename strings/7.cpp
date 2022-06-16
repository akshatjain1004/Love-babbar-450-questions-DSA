#include <iostream>
#include <string>

using namespace std;

string say(string str)
{
    char curr = str[0];
    string ans = "";
    int count = 1;
    int temp = 1;
    int i = 0;
    for (int i = 0; i < str.size(); i++)
    {
        while (str[count] == curr)
        {
            i++;
            count++;
            temp++;
        }
        i = count - 1;
        ans += to_string(temp) + curr;
        curr = str[count];
        temp = 0;
    }
    return ans;
}
string countAndSay(int n)
{
    if (n == 1)
    {
        return "1";
    }
    else
    {
        return (say(countAndSay(n - 1)));
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    cout<<countAndSay(n)<<'\n';
    return 0;
}
