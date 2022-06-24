#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        vector <int> st;
        for(int i=0;i<n;i++){
            int r;
            cin>>r;
            st.push_back(r);
        }
        sort(st.begin(),st.end());
        
        vector <int> dist;
        for(int i=i;i<n;i++){
            dist.push_back(st[i]-st[i-1]);
        }
        
        sort(dist.begin(),dist.end());
        int ans=0;
        
        // for(int i=dist.size()-1;i>=dist.size()-c+1;i--){
        //     ans+=dist[i];
        // }
        for(int i=dist.size()-c;i<dist.size();i++){
            ans+=dist[i];
            cout<<dist[i]<<" ";
        }
        cout<<ans<<'\n';
    }
    return 0;
}
