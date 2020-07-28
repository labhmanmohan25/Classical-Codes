#include <bits/stdc++.h> 
#include <vector>
#include <string>
#include <stdio.h>
using namespace std; 
#include <math.h>
#include <cstdlib> 
#include <iostream> 

int main() { 
	int t,n,l,i,x,y;
	cin>>t;
	while(t--){
		x=0;
		y=0;
		cin>>n;
		string s,temp;
		cin>>s;
		temp=s[0];
			if(s[0]=='L'){
				x=x-1;
			}
			if(s[0]=='R'){
				x=x+1;
			}
			if(s[0]=='U'){
				y=y+1;
			}
			if(s[0]=='D'){
				y=y-1;
			}
		for(i=1;i<n;i++){
			if(s[i-1]=='L' || s[i-1]=='R'){
				if(s[i]=='U'){
				y=y+1;
				}
				if(s[i]=='D'){
					y=y-1;
				}
			}
			if(s[i-1]=='U' || s[i-1]=='D'){
				if(s[i]=='L'){
				x=x-1;
				}
				if(s[i]=='R'){
					x=x+1;
				}
			}	
		}
		
		
		cout<<x<<" "<<y<<endl;	
	}
	return 0; 
} 
  
