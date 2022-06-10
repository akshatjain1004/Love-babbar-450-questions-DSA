#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

void reverseString(vector<char> &s)
{
    int i = 0;
    int j = s.size() - 1;
    while (j >= i)
    {
        swap(s[i], s[j]);
        i++;
        j--;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector <char> s;
    for (int i = 0; i < n; i++)
    {
        char p;
        cin>>p;
        s.push_back(p);
    }
    reverseString(s);
    for (int i = 0; i < n; i++)
    {
        cout<<s[i];
    }
    
    return 0;
}
