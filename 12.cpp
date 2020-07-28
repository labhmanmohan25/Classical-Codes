#include <bits/stdc++.h> 
using namespace std; 
#include <vector>
#include <iostream>

int main() 
{ 
	int t,N,M,i,j,temp,cst,minimum;
	
	cin>>t;
	while(t--){
		minimum=100000;
		
		cin>>N>>M;
		int f[N],p[M];
		for(i=0;i<N;i++){
			cin>>f[i];
		}
		for(i=0;i<N;i++){
			cin>>temp;
			p[f[i]-1]=p[f[i]-1]+temp;
		}
		
		for(i=0;i<M;i++){
			if(p[i]!=0&&p[i]<minimum){
				minimum=p[i];
			}
		}
		
		cout<<minimum<<endl;

	}
    return 0; 
}
