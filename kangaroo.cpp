#include <bits/stdc++.h> 
#include <vector>
#include <string>
#include <stdio.h>
using namespace std; 
#include <math.h>
#include <cstdlib> 
#include <iostream> 

int main() { 
	long long int x1,v1,x2,v2,i,count=0; 
	cin>>x1>>v1>>x2>>v2;
	if(x1==x2){
		if(v1==v2){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
	}
	else if(v1==v2){
		cout<<"NO";
		return 0;
	}
	if(x1>x2){
		if(v1>v2){
			cout<<"NO";
			return 0;
		}
		while(x1>x2){
			x1=x1+v1;
			x2=x2+v2;
			if(x1==x2){
				cout<<"YES";
				return 0;
			}
		}
		cout<<"NO";
	}
	if(x2>x1){
		if(v2>v1){
			cout<<"NO";
			return 0;
		}
		while(x2>x1){
			x1=x1+v1;
			x2=x2+v2;
			if(x1==x2){
				cout<<"YES";
				return 0;
			}
		}
		cout<<"NO";
	}
	return 0; 
} 
  
