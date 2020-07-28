#include <bits/stdc++.h> 
#include <vector>
#include <string>
#include <stdio.h>
using namespace std; 
#include <math.h>
#include <cstdlib> 
#include <iostream> 
  
int main() { 
	long long int n,i,t1,t2,m,temp;
	cin>>n;
	long long int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}	
	sort(a, a+n);
	t1=a[0];t2=a[1];
	m=abs(a[0]-a[1]);
	for(i=2;i<n;i++){
		if(abs(a[i]-a[i-1])<m){
			m=abs(a[i]-a[i-1]);
		}
	} 
	cout<<m; 
	  	    	
	return 0; 
} 
  
