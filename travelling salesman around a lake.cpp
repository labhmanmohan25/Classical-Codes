#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	long long int n,k,i,diff=0;
	cin>>k>>n;
	long long int a[n+1];
	cin>>a[0]>>a[1];
	diff=a[1]-a[0];
	for(i=2;i<n;i++){
		cin>>a[i];
		if(a[i]-a[i-1]>diff){
			diff=a[i]-a[i-1];
		}		
	}
	a[n]=k+a[0];
	
		if(a[i]-a[i-1]>diff){
			diff=a[i]-a[i-1];
		}
		
	cout<<k-diff;	
	
	return 0;
}
