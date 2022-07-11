#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector <int> heap(int n){
    vector <int> v;
    v.push_back(-1);
    v.push_back(n);
    return v;
}

void insert(vector <int>&v,int n){
    v.push_back(n);
    int i = v.size()-1;
    
    while(i>1){
        int p= i/2;
        if(v[i]>v[p]){
            swap(v[i],v[p]);
            i=p;
        }
        else{
            return;
        }
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int a;
    cin>>a;
    n-=1;
    auto h= heap(a);
    while(n--){
        int r;
        cin>>r;
        insert(h,r);
    }
    for(int i=1;i<h.size();i++){
        cout<<h[i]<<" ";
    }
    return 0;
}
