#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	int l,m,i,j,p=0;
	cin>>l>>m;
	for(i=l;i<=m;i++){
		for(j=i;j<=m;j++){
			p=max(p,i^j);
		}
	}
	cout<<p;
	
	
    return 0; 
}





