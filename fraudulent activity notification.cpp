#include <bits/stdc++.h> 
#include <vector>
#include <string>
#include <stdio.h>
using namespace std; 


int main(){
	long long int n,i,j,m=0;
	cin>>n;
	long long int a[n]={0},b[n];
	for(i=0;i<n;i++){
		cin>>b[i];
		if(i!=0)
			m=max(m, a[i-1]);
		a[i]=b[i]+m;
	}
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}
