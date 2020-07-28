#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	int n,i,d,j,m,c=0,temp=0;
	cin>>n;
	int s[n];
	for(i=0;i<n;i++){
		cin>>s[i];
	}
	cin>>d>>m;
	
	for(i=0;i<=n-m;i++){
		temp=0;
		for(j=i;j<=i+m-1;j++){
			temp=temp+s[j];
		}
		if(temp==d){
			c++;
		}
	}

	cout<<c;

    return 0; 
}
