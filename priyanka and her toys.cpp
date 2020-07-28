#include <bits/stdc++.h> 
#include <vector>
#include <string>
#include <stdio.h>
using namespace std; 
#include <math.h>
#include <cstdlib> 
#include <iostream> 
  
int main() { 
	int n,i,count=1,temp;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a, a+n);
	temp=a[0];
	for(i=1;i<n;i++){
		if(a[i]>temp+4){
			count++;
			temp=a[i];	
		}
	}
	cout<<count<<endl;
	
	
	
	return 0; 
} 
  
