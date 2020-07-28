#include <bits/stdc++.h> 
#include <vector>
#include <string>
#include <stdio.h>
using namespace std; 
#include <math.h>
#include <cstdlib> 
#include <iostream> 

int main() { 
	long long int n,k,i,temp,d;
	cin>>n>>k;
	long long int a[n],b[n],pos[100000];
	for(i=0;i<n;i++){
		cin>>a[i];
		pos[a[i]] = i;
		b[i]=a[i];
	}
	sort(b, b+n, greater<long long int> ());
	for(i=0;i<n;i++){
		if(a[i]==b[i]){
			continue;
		}
		else{
			temp=a[i];
			a[i]=b[i];
			a[pos[b[i]]]=temp;
			k--;	
		}
		if(k==0){
			break;
		}
	}
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0; 
} 
  
