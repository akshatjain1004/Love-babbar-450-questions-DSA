#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int reverse(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int last = n % 10;
        rev = rev * 10 + last;
        n = n / 10;
    }
    return rev;
}
// to check palindrome
bool checkPali(int a)
{
    if (a == reverse(a))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int PalinArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // checking each element
        if (!checkPali(a[i]))
        {
            return 0;
        }
    }
    return 1;
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<PalinArray(arr,n);
    return 0;
}
