#include <bits/stdc++.h> 
#include <vector>
#include <string>
#include <stdio.h>
using namespace std; 
#include <math.h>
#include <cstdlib> 
#include <iostream> 

long long int apu(string a[], long long int i, long long int k) {
	long long int cnt=0;
	for(long long int p;p< min(a[i+k-1].size(), a[i].size());p++){
		if(a[i+k-1][p]==a[i][p]){
			cnt++;
		}
		else{
			return cnt;
		}
	}
	return cnt;
}

int main(){
	long long int p, n, k, count, m=0;
	string str[100000], temp;
	cin>>p;
	while(p--){
		count=0;
		m++;
		cin>>n>>k;
		for(long long int i = 0; i < n; ++i){
	      cin>>str[i];
	    }
	    for(long long int i = 0; i < n-1; ++i)
	       for( long long int j = i+1; j < n; ++j){
	          if(str[i] > str[j]){
	            temp = str[i];
	            str[i] = str[j];
	            str[j] = temp;
	          }
			}
		long long int i=0;
		while(i<n){
			count=count + apu(str, i, k);
			i=i+k;	
		}
		cout<<"Case #"<<m<<":"<<" "<<count<<endl;
	    
	}
	
	return 0;
}
