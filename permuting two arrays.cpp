#include <bits/stdc++.h> 
#include <vector>
#include <string>
#include <stdio.h>
using namespace std; 
#include <math.h>
#include <cstdlib> 
#include <iostream> 
  
int main() { 
	long long int q,n,k,i;
	cin>>q;
	while(q--){
		cin>>n>>k;
		long long int a[n],b[n],cnt=0;
			for(i=0;i<n;i++){
				cin>>a[i];
			}
			for(i=0;i<n;i++){
				cin>>b[i];
			}
		sort(a, a+n);
		sort(b, b+n, greater<int>());
			for(i=0;i<n;i++){
				if(a[i]+b[i]<k){
					cnt=1;
					break;
				}
			}	
		if(cnt==0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0; 
} 
  
