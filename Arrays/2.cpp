#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {4, 5, 1, 2, 6};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    int max= arr[0];
    int min=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max= arr[i];
        }
        else if(arr[i]<min){
            min= arr[i];
        }
    }
    cout<<max<<" "<<min;
    

    return 0;
}
