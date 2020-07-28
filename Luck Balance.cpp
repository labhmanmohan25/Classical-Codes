#include <bits/stdc++.h> 
#include <vector>
#include <string>
#include <stdio.h>
using namespace std; 
#include <math.h>
#include <cstdlib> 
#include <iostream> 
  
int main() { 
	int n,k,i,temp2;
	long long int sum=0,temp1;
	cin>>n>>k;
	vector<long long int> v;
	for(i=0;i<n;i++){
		cin>>temp1>>temp2;
		if(temp2==1){
			v.push_back(temp1);
		}
		sum=sum+temp1;
	}
//	cout<<sum<<endl<<v.size()<<endl;
	sort(v.begin(), v.end());
	if(k>v.size()){
		cout<<sum<<endl;
	}
	else{
		sum=sum-2*accumulate(v.begin(), v.begin()+v.size()-k, 0);
		cout<<sum<<endl;
	}
	return 0; 
} 
  
