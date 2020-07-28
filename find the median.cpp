#include <bits/stdc++.h> 
#include <vector>
#include <string>
#include <stdio.h>
using namespace std; 

int main(){
	long long int n,i;
	cin>>n;
	long long int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	} 
	sort(arr, arr+n);
	cout<<arr[(n+1)/2-1]<<endl;
	
	return 0;
}
