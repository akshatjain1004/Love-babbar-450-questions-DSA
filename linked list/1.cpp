#include <iostream>
#include <list>
#include <algorithm>


using namespace std;


int main(int argc, char const *argv[])
{
    list <int> l;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int r;
        cin>>r;
        l.push_back(r);
    }
    auto head= l.begin();
    return 0;
}
