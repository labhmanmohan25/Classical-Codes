#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	string s,t;
	int i,j,k,count,ls,lt;
	cin>>s>>t>>k;
	ls=s.length();
	lt=t.length();
	//cout<<ls<<lt<<endl;
	for(i=0;i<ls;i++){
		
		if(s[i]!=t[i]&&i<lt){
			count=i;
			break;
		}
		if(i>=lt){
			count=ls-i;
			if(k==count){
				cout<<"Yes"<<endl;
			}
			else{
				cout<<"No"<<endl;
			}
			return 0;
		}	
	}
	if(count==lt-ls && k==count){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
	
    return 0; 
	
	if(k==ls+lt-2*count){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
	
    return 0; 
}
