#include <iostream>
#include <algorithm>
#include <vector>

using  namespace std;

int search(vector<int>& nums, int target) {
        int k;
        int n= nums.size();
        int i=0;
        int j=n-1;
        int mid;
        while(i<=j){
            if(nums[i]==target){
                return i;
            }
            if(nums[j]==target){
                return j;
            }
            mid= (i+j)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[i]<nums[mid]){
                if(target>=nums[i]&&target<=nums[mid]){
                    j= mid-1;
                }
                else{
                    i= mid+1;
                }
            }
            else{
                if(target>=nums[mid]&&target<=nums[j]){
                    i= mid+1;
                }
                else{
                    j= mid-1;
                }
            }
        }
//         while(i<=j){
//             int mid= (i+j)/2;
//             if(nums[mid]<nums[(mid+1)%n]&& nums[mid]<nums[(mid+n-1)%n]){
//                 k=mid;
//                 break;
//             }
//             else if(nums[mid]>nums[i]){
//                 i=mid;
//             }
//             else{
//                 j=mid;
//             }
            
//         }
//         // return k;
//         if(nums[k]==target){
//             return k;
//         }
//         if(target>=nums[0]&& target<nums[k]){
//             j=k-1;
//             i=0;
//         }
//         else{
//             i=k+1;
//             j=n;
//         }
        
//         while(i<=j){
//             int mid= (i+j)/2;
//             if (nums[mid]==target){
//                 return mid;
//             }
//             else if(nums[mid]>target){
//                 j=mid-1;
//             }
//             else if(nums[mid]<target){
//                 i=mid+1;
//             }
//         }
        return -1;
        
    }

    int main(int argc, char const *argv[])
    {
        int n;
        cin>>n;
        vector <int> arr;
        for (int  i = 0; i < n; i++)
        {
            int r;
            cin>>r;
            arr.push_back(r);
        }
        int x;
        cin>>x;
        cout<<search(arr,x)<<'\n';
        

        return 0;
    }
    