#include <bits/stdc++.h> 
using namespace std; 
#include <vector>
#include <iostream>

int main() 
{ 
	int t,r,c,i;
	cin>>t;
	while(t--){
		cin>>r>>c;
		r=c=(r+c)/2;
		if(r==c==1){
			cout<<"25"<<endl;
			goto alpha;
		}
		else{
			cout<<"27"<<endl;
		}
		cout<<r<<" "<<c<<endl;
		r=c=1;
		cout<<r<<" "<<c<<endl;
		alpha:
		for(i=2;i<8;i++){
			if(i<=4){
				cout<<i<<" "<<i<<endl;
				cout<<i<<" "<<2*i-1<<endl;
				cout<<2*i-1<<" "<<i<<endl;
				cout<<i<<" "<<i<<endl;
			}
			else{
				cout<<i<<" "<<i<<endl;
				cout<<i<<" "<<2*(9-i)-1<<endl;
				cout<<2*(9-i)-1<<" "<<i<<endl;
				cout<<i<<" "<<i<<endl;
			}
			
		
		r=c=8;
		cout<<r<<c<<endl;
		}	
	}
	
    return 0; 
}
