#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool isRotation(string s1, string s2){
    bool temp= true;
    vector <int> ind;
    int n= s1.size();
    for (int i = 0; i < n; i++)
    {
        if(s2[i]==s1[0]){
            ind.push_back(i);
            temp= false;
        }
    }
    if(temp){
        return false;
    }
    int f;
    for(int i=0;i<ind.size();i++){
        f=0;
        while(f<n){
            if(s2[(ind[i]+f)%n]!=s1[f]){
                break;
            }
            f++;
        }
        if(f==n){
            return true;
        }
    }
    return false;

}
int main(int argc, char const *argv[])
{

    string s1,s2;
    cin>>s1>>s2;
    cout<<isRotation(s1,s2)<<"\n";
    return 0;
}
