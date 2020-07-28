#include <bits/stdc++.h> 
#include <vector>
#include <string>
#include <stdio.h>
using namespace std; 
#include <math.h>
#include <cstdlib> 
#include <iostream> 

int main(){
	long long int t,n,k,i,sum;
	cin>>t;
	while(t--){
		cin>>n>>k;
		i=0;
		sum=k;
		while(sum>0){
			i++;
			sum=sum-i;
		}
		char s[n];
		for(long long int j=0;j<n;j++){
			s[j]='a';
		}
		s[n-i-1]='b';
		s[n-i-sum]='b';
		
		for(i=0;i<n;i++){
			cout<<s[i];
		}
		cout<<endl;	
	}
	
	return 0;
}
