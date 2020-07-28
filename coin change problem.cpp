#include <bits/stdc++.h> 
#include <vector>
#include <string>
#include <stdio.h>
using namespace std; 
#include <math.h>

int w[250]={-1};

long long int dp(long long int n, vector<long long int> c){
	long long int i;
	long long int sum=0;
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}
	if(w[n-1]!=-1){
		return w[n];
	}
	for(i=0;i<c.size();i++){
		if(n-c[i]<0){
			break;
		}
		sum=sum+dp(n-c[i],c);
	}
	w[n-1]=sum;
	
	return sum;
}

int main(){
	long long int n,m,temp;
	cin>>n>>m;
	vector<long long int>	c;
	while(m--){
		cin>>temp;
		c.push_back(temp);
	}
	sort(c.begin(), c.end());
	cout<<dp(n,c);
	
	return 0;
}
