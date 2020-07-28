#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	int n,k,i,max=0;
	cin>>n>>k;
	int h[n];
	for(i=0;i<n;i++){
		cin>>h[i];
		if(h[i]>max){
			max=h[i];
		}
	}
	if(max<=k){
		cout<<0;
	}
	else
		cout<<max-k;
	
    return 0; 
}
