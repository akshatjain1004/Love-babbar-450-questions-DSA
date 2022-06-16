#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<string> find_permutation(string S)
{

    if (S.size() == 2)
    {
        vector<string> ans;
        ans.push_back(S);
        reverse(S.begin(), S.end());
        ans.push_back(S);

        return ans;
    }
    else
    {
        vector<string> ans;
        vector<string> final;
        for (int i = 0; i < S.size(); i++)
        {
            string sub_str = S.substr(0, i) + S.substr(i + 1, S.size() - i - 1);
            vector<string> temp = find_permutation(sub_str);

            for (int j = 0; j < temp.size(); j++)
            {
                string sub = S[i] + temp[j];
                ans.push_back(sub);
            }
        }
        sort(ans.begin(), ans.end());
        auto it = unique(begin(ans), end(ans));
        ans.erase(it, ans.end());

        return ans;
    }
}

int main(int argc, char const *argv[])
{
    string str;
    cin>>str;
    auto ans= find_permutation(str);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
