#include <bits/stdc++.h> 
#include <vector>
#include <string>
#include <stdio.h>
using namespace std; 
#include <math.h>
#include <cstdlib> 
#include <iostream> 
  
int main(){
	int t;
	long long int a,b,diff;
	cin>>t;
	while(t--){
		cin>>a>>b;
		if(a%b==0){
			cout<<"0"<<endl;
			continue;
		}
		else{
			cout<<b*(a/b+1)-a<<endl;
			continue;
		}
		
	}
	
	return 0;
}
