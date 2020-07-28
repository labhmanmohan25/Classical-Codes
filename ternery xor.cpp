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
	long long int t,len,i,l;
	string s;
	cin>>t;
	while(t--){
		cin>>len>>s;
		l=len;
		int count =0;
		i=0;
		char arr[len], brr[len];
		while(i<len){
			if(s[i]=='2' && count==0){
				arr[i]='1';
				brr[i]='1';
			}
			else if(s[i]=='1' && count==0){
				arr[i]='1';
				brr[i]='0';
				count=1;
			}
			else {
				arr[i]='0';
				brr[i]=s[i];
			}
			i++;
		}
		for(i=0;i<len;i++){
			cout<<arr[i];
		}
		cout<<endl;
		for(i=0;i<len;i++){
			cout<<brr[i];
		}
		cout<<endl;
	}

	return 0;
}
