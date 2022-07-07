#include <iostream>
#include <unordered_map>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    unordered_map <int,int> f;
    f[0]=0;
    f[1]=1;
    if(n<2){
        cout<< f[n]<<'\n';
    }
    else{
        for(int i=2;i<=n;i++){
                f[i]= f[i-1]+f[i-2];
            }
        cout<<f[n]<<"\n";
    }
    
    int prev1=0;
    int prev2=1;
    if(n<2){
        cout<<n<<'\n';
    }
    else{
        int curr;
        for(int i=2;i<=n;i++){
            curr= prev2+prev1;
            prev1= prev2;
            prev2= curr;
        }
        cout<<curr<<'\n';
    }
    

    return 0;
}
