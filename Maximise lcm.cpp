#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
using namespace std;

long long int lcm (long long int no1, long long int no2)
{
	long long int lcm;
	if(no1>no2)
	lcm=no1;
	else
	lcm=no2;
	while(lcm%no1!=0 || lcm%no2!=0)
	{
		lcm++;
	}
	return lcm;
}

int main(){
	long long int t,n,m,i,apu,temp;
	cin>>t>>n>>m;
	while(t--){
		temp=1;
		long long int a[n],val[m]={0};
		for(i=0;i<n;i++){
			cin>>a[i];
			val[a[i]-1]=1;
			temp=lcm(temp,a[i]); 
		}	
		apu=1;
		for(i=0;i<m;i++){
			if(val[m]==0){
				if(temp<lcm(temp, i+1)){
					temp=lcm(temp, i+1);
					apu=i+1;
				}
			}
		}
		cout<<apu<<" "<<temp<<endl;
	}

	return 0;
}
