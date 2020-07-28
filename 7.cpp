#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	int t,n,i,h;
	cin>>t;
	while(t--){
		
		cin>>n;
		for(i=1;i<=n;i++){
			if(i%2==1){
				h=h*2;
			}
			else{
				h++;
			}
		}
		cout<<h<<endl;
	}
	
	
    return 0; 
}





