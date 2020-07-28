#include <bits/stdc++.h> 
#include <vector>
#include <string>
#include <stdio.h>
using namespace std; 
#include <math.h>
#include <cstdlib> 
#include <iostream> 

int main() { 
	int t,n,i,y;
	cin>>t;
	while(t--){
		cin>>n;
		vector<int> x,d;
		int p=0,count=0;
		int a[n];
		y=-1;
		for(i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>y){
				y=a[i];
			}
		}
		
		for(i=0;i<n;i++){	
			if(a[i]==y){
				x.push_back(i);
				if(count>0){
					d.push_back(i-x[count-1]);
				}
				count++;
			}
		}
	//	cout<<count<<" "<<x[count-1]<<" "<<x[0]<<d[0]<<endl;
		if(x[0]>=n/2){
			cout<<n-x.size()<<endl;
		}
		else if(x[count-1]-x[0]<n/2){
			cout<<n-x[count-1]-1<<endl;
		}
		else if(*max_element(d.begin(), d.end())>n/2){
			cout<<*max_element(d.begin(), d.end())-n/2<<endl;
		}
		else{
			cout<<"0"<<endl;
		}
			
	}   
	return 0; 
} 
  
