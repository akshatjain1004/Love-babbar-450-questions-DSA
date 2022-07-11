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

void dlt(vector <int>&v,int k){
    int n= v.size();
    int ind;
    for(int i=1;i<n;i++){
        if(v[i]==k){
            v[i]= v[n-1];
            ind= i;
            break;
        }
    }
    v.pop_back();
    while(ind>=1 && ind<n){
        int p= ind/2;
        if(v[ind]< max(v[2*ind],v[2*ind+1])){
            if(v[2*ind +1]> v[2*ind]){
                swap(v[ind],v[2*ind+1]);
                ind= 2*ind+1;
            }
            else{
                swap(v[ind],v[2*ind]);
                ind= 2*ind;
            }
        }
        if(v[ind]>v[p] && p!=0){
            swap(v[ind],v[p]);
            ind=p;
        }
        else{
            return;
        }
    }
    

}

void heapify(int ind, vector<int>&v,int n){
    while(ind<=n){
        if(v[ind]< max(v[2*ind], v[2*ind +1])){
            if(v[2*ind]>v[2*ind +1]){
                swap(v[ind],v[2*ind]);
                ind= 2*ind;
            }
            else{
                swap(v[ind],v[2*ind+1]);
                ind= 2*ind+1;
            }
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
    dlt(h,60);
    for(int i=1;i<h.size();i++){
        cout<<h[i]<<" ";
    }
    
    return 0;
}
