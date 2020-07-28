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
	long long int n,i;	
	cin>>n;
	long long int a[n];
	vector<long long int> pos,neg,zero;
	for(i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>0){
			pos.push_back(a[i]);
		}
		if(a[i]<0){
			neg.push_back(a[i]);
		}
		if(a[i]==0){
			zero.push_back(0);
		}
	}
	
	if(pos.size()==0){
		pos.push_back(neg[neg.size()-1]);
		neg.pop_back();
		pos.push_back(neg[neg.size()-1]);
		neg.pop_back();
	}
	
	if(neg.size()%2==0){
		zero.push_back(neg[neg.size()-1]);
		neg.pop_back();
	}
	
	cout<<neg.size()<<" ";
	for(i=0;i<neg.size();i++){
		cout<<neg[i]<<" ";
	}
	cout<<endl;
	
	cout<<pos.size()<<" ";
	for(i=0;i<pos.size();i++){
		cout<<pos[i]<<" ";
	}
	cout<<endl;
	
	cout<<zero.size()<<" ";
	for(i=0;i<zero.size();i++){
		cout<<zero[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
  
