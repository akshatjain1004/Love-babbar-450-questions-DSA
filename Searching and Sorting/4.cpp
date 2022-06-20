#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int countSquares(int N)
{
    float a = sqrt(N);
    if (a - (int)a == 0)
    {
        return a - 1;
    }
    else
    {
        return a;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    cout<<countSquares(n)<<'\n';
    return 0;
}
