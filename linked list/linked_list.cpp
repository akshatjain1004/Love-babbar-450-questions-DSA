#include <iostream>
#include <list>

using namespace std;

int main(int argc, char const *argv[])
{
    list <int> l1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int r;
        cin>>r;
        l1.push_back(r);
    }
    // for(auto x:l1){
    //     cout<<x+1<<" ";
    // }
    auto head= l1.begin();
    for(int i=0;i<n;i++){
        cout<<*head<<" ";
        head++;
    }
    return 0;
}
