#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> factorial(int N)
{
    vector<int> fact;
    fact.push_back(1);
    
    int num = 0;
    int carry;
    for (int i = 2; i <= N; i++)
    {
        carry = 0;
        for (int j = 0; j < fact.size(); j++)
        {
            num = fact[j] * i;
            fact[j] = (fact[j] * i) % 10 + carry;
            carry = (int) (num / 10);
        }
        if (carry != 0)
        {
            fact.push_back(carry);
            // reverse(fact.begin(), fact.end());
        }

        
        
    }
    reverse(fact.begin(), fact.end());
    return fact;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

    vector <int> fact= factorial(n);

    for(int i= 0;i< fact.size();i++){
        cout<<fact[i];
    } 

    return 0;
}
