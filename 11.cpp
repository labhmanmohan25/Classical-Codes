#include <bits/stdc++.h> 
using namespace std; 
#include <vector>
#include <iostream>

int main() 
{ 
	int t,N,M,i,j,temp,cst;
	vector<int> f,p,c;
	cin>>t;
	while(t--){
		cin>>N>>M;
		for(i=0;i<N;i++){
			cin>>temp;
			f.push_back(temp);
		}
		for(i=0;i<N;i++){
			cin>>temp;
			p.push_back(temp);
		}
		for(i=1;i<=M;i++){
			cst=0;
			for(j=0;j<N;j++){
				if(f[j]==i){
					cst=cst+p[j];	
				}
			}
			if(cst!=0){
				c.push_back(cst);
			}
		}
		
		cout<<*min_element(c.begin(), c.end())<<endl;	
		
	}
    return 0; 
}
