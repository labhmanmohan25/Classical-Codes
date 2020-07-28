#include <bits/stdc++.h> 
#include <vector>
#include <string>
#include <stdio.h>
using namespace std; 

int main(){
	long long int n,i,diff=1000000000000;
	vector<long long int> v;
	cin>>n;
	long long int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr, arr+n);
	for(i=0;i<n-1;i++){
		if(abs(arr[i+1]-arr[i])<diff){
			v.clear();
			v.push_back(arr[i]);
			v.push_back(arr[i+1]);
			diff=abs(arr[i+1]-arr[i]);
		}
		else if((arr[i+1]-arr[i])==diff){
			v.push_back(arr[i]);
			v.push_back(arr[i+1]);
		}
	}
	for(i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	
	return 0;
}
