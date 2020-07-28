#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	int v,n,i;
	cin>>v>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		if(a[i]==v){
			cout<<i<<endl;
			return 0;
		}	
	}
	
    return 0; 
}
