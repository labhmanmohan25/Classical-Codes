#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	long long int t,i,k,x,del,apu;
	string s;
	cin>>t;
	while(t--){
		cin>>s>>k>>x;
		del=0;
		apu=0;
		long long int a[26]={0};
        for(i=0;i<s.size();i++)
        {
            if(a[s[i]-'a']<x){
            	a[s[i]-'a']=1+a[s[i]-'a'];
            	apu++;
			}
			else{
				del++;
				if(del>k){
					break;
				}
			}
        }
		cout<<apu<<endl;
	}
	
	return 0;
}
