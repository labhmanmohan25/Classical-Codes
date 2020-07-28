#include <bits/stdc++.h> 
#include <vector>
#include <string>
#include <stdio.h>
using namespace std; 
#include <math.h>
#include <cstdlib> 
#include <iostream> 
  
int main() { 
	int n,i;
	long long int sum=0;
	cin>>n;
	int c[n];
	for(i=0;i<n;i++){
		cin>>c[i];
	}
	sort(c, c+n, greater<int>());
	for(i=0;i<n;i++){
		sum=sum+c[i]*pow(2,i);
	}
	cout<<sum<<endl;
	return 0; 
} 
  
