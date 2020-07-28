#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	int a[26],i,l,h=0;
	for(i=0;i<26;i++){
		cin>>a[i];
	}
	string w;
	cin>>w;
	l=w.length();
	//cout<<l<<endl;
	for(i=0;i<l;i++){
		if(a[w[i]-'a']>h){
			h=a[w[i]-'a'];
		}
		//cout<<h<<endl;
	}
	//cout<<h<<endl;
	cout<<l*h<<endl;
    return 0; 
}
