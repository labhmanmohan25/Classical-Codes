#include <bits/stdc++.h> 
#include <vector>
#include <string>
#include <stdio.h>
using namespace std; 
#include <math.h>
#include <cstdlib> 
#include <iostream> 

long long int win(vector<long long int> temp, long long int x, long long int y){
	long long int i,j,l1,l2;
	l1=temp[x-1].size();
	l2=temp[y-1].size();
	i=l1-1;
	j=l2-1;
	while(1){
		j=j-temp[x-1];
		if(j<=0){
			return x;
		}
		i=i-temp[y-1];
		if(i<=0){
			return y;
		}
	}
}
  
int main() { 
	long long int n, k, q, i, s, t, temp, x, y;
	cin>>n>>k>>q;
	vector<vector<long long int> > team[k];
	for(i=0;i<n;i++){
		cin>>s>>t;
		team[t-1].push_back(s);
	}
	for(i=0;i<k;i++){
		team[i].sort(team[i].begin(), team[i].end());
	}
	for(i=0;i<q;i++){
		cin>>temp>>x>>y;
		if(temp==1){
			team[y-1].push_back(x);
		}
		else{
			cout<<win(temp, x, y)<<endl;
		}
	}
	
	return 0; 
} 
  
