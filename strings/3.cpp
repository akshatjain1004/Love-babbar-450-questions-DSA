#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;
vector <char> duplicate(string s){
    int n= s.size();
    unordered_map <char,int> count;
    for(int i=0;i<n;i++){
        count[s[i]]++;
    }
    vector <char> dup;
    for(auto x:count){
        if(x.second>1){
            dup.push_back(x.first);
        }
    }
    return dup;
}

int main(int argc, char const *argv[])
{
    string s;
    getline(cin,s);
    auto a= duplicate(s);
    int n= a.size();
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}
