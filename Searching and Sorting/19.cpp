#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
	int n;
	cin>>n;
	vector <int> arr;
	for(int i=0;i<n;i++){
		int r;
		cin>>r;
		arr.push_back(r);
	}
	sort(arr.begin(),arr.end());
	vector <int> sums;
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
		sums.push_back(sum);
	}
	int q;
	cin>>q;
	while(q--){
		int p;
		cin>>p;
		int j=0;
		while(arr[j]<=p &&j<n){
			j++;
		}
		cout<<j<<" "<<sums[j-1]<<'\n';
	}
	return 0;
}