#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	int n,p,i,s,e;
	cin>>n;
	int a[n],b[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	p=a[0];
	s=0; e=n-1;
	for(i=1;i<n;i++){
		if(a[i]<p){
			b[s]=a[i];
			s++;
		}
		else if(a[i]>p){
			b[e]=a[i];
			e--;
		}
	}
	b[s]=p;
	for(i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
    return 0; 
}
