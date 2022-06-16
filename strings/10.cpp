#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <set>
using namespace std;

void printAll(string s){
    set <string> st;
    int i=0;
    int n = s.size();
    int j;
    for(int i=0;i<n;i++){
        string temp;
        for(int j=1;j<=n-i;j++){
            temp= s.substr(i,j);
            st.insert(temp);
        }
        string ans= "";
        for(int k=1;k<temp.size();k++){
            ans+= temp.substr(0,k-1)+ temp.substr(k+1,temp.size()-k-1);
            if(ans!=""){
                st.insert(ans);
            }
            
        }
        for (auto i: st)
        {
            cout<<i<<'\n';
        }
        
    }
}

int main(int argc, char const *argv[])
{
    string str;
    cin>>str;
    printAll(str);
    return 0;
}
