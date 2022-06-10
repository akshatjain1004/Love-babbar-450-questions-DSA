#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int zeros[n];
    for (int i = 0; i < n; i++)
    {
        zeros[i]= -1;
    }
    
    int ones[n];
    for (int i = 0; i < n; i++)
    {
        ones[i]= -1;
    }

    int twos[n];
    for (int i = 0; i < n; i++)
    {
        twos[i]= -1;
    }

    int count1=0;
    int count2=0;
    int count3=0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0){
            zeros[count1]=0;
            count1++;
        }
        else if(arr[i]==1){
            ones[count2]=1;
            count2++;
        }
        else{
            twos[count3]=2;
            count3++;
        }
    }
    int sorted[n];
    int count=0;

    for (int i = 0; i < n; i++)
    {
        if (zeros[i]!=-1)
        {
            sorted[count]=0;
            count++;
        }
        else{
            break;
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        if (ones[i]!=-1)
        {
            sorted[count]=1;
            count++;
        }
        else{
            break;
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        if (twos[i]!=-1)
        {
            sorted[count]=2;
            count++;
        }
        else{
            break;
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<sorted[i]<<" ";
        
    }
    return 0;
}
