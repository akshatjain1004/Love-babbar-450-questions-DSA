#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp= a;
    a= b;
    b= temp;
    return;
}


int main(int argc, char const *argv[])
{
    int arr[] = {4, 5, 1, 2, 6};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    int i,j;
    i=0;
    j=n-1;

    while (j>i)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}
