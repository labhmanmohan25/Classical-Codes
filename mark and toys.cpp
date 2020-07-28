#include <bits/stdc++.h> 
#include <vector>
#include <string>
#include <stdio.h>
using namespace std; 
#include <math.h>
#include <cstdlib> 
#include <iostream> 
  
int main() { 
	long long int n,k,i,count=0;
	cin>>n>>k;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a, a+n);
	i=0;
	while(k>=0 && i<n){
		count++;
		k=k-a[i];
		i++;
	}
	cout<<count-1<<endl;
	return 0; 
} 
  
