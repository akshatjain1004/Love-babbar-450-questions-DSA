#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

bool isShuffle(string s1, string s2, string s3){
    int n,m;
    n= s1.size();
    m= s2.size();
    unordered_map <char,int> count;
    for(int i=0;i<n;i++){
        count[s1[i]]++;
    }
    for(int i=0;i<m;i++){
        count[s2[i]]++;
    }
    unordered_map <char, int> fcount;
    for(int i=0;i<s3.size();i++){
        fcount[s3[i]]++;
    }
    if(fcount.size()!= count.size()){
        return false;
    }
    for(auto x: count){
        if(x.second!= fcount[x.first]){
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{

    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    cout<<isShuffle(s1,s2,s3)<<"\n";
    return 0;
}
