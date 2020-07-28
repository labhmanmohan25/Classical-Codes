#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	int p,d,m,s,count=0,cst;
	cin>>p>>d>>m>>s;
	cst=p;
	if(s>=p){
	
	while(s>=cst){
		
		if(cst>m){
			count++;
			s=s-cst;
			cst=cst-d;
		}
		else{
			cst=m;
			count=count+abs(s)/m;
			break;
		}
		
		//cout<<s<<"  "<<cst<<"  "<<count<<endl;
	}}
	cout<<count;

    return 0; 
}





