#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    long long int n,m,temp1,temp2,i;
    cin>>n;
    i=n;
    vector<long long int> v;
    cin>>temp1;
    v.push_back(temp1);
    temp2=temp1;
    i--;
    while(i--){
    	cin>>temp1;
    	if(temp1!=temp2){
    		v.push_back(temp1);
    		temp2=temp1;
		}
	}
    cin>>m;
    while(m--){
    	cin>>temp1;
    	temp2=v.size()+1;
    	for(i=0;i<v.size();i++){
    		if(temp1>=v[i]){
    			temp2=i+1;
    			break;
			}	
		}
		cout<<temp2<<endl;
	}
    
	return 0;
}
