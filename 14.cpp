#include <bits/stdc++.h> 
using namespace std; 
#include <vector>
#include <iostream>

unsigned int Bits(unsigned int n) 
{ 
    unsigned int count = 0; 
    while (n) { 
        count += n & 1; 
        n >>= 1; 
    } 
    return count; 
} 

int main() 
{ 
	int t,n,i,q,p,e,o;
	cin>>t;
	while(t--){
		cin>>n>>q;
		int a[n],b[n];
			for(i=0;i<n;i++){
				cin>>a[i];	
			}
			while(q--){
				e=o=0;
				cin>>p;
				for(i=0;i<n;i++){
					b[i]=p*a[i];
					if(Bits(b[i])%2==0)
						e++;
					else
						o++;
				}
				cout<<e<<" "<<o<<endl;	
			}
	}
	
    return 0; 
}
