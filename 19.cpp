#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	int n,i,temp,j,k,cnt=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
		i=n-1;
		temp=a[i];
			for(j=i-1;j>=0;j--){
				if(a[j]>temp){
					a[j+1]=a[j];
				}
				else if(a[j]<temp){
					a[j+1]=temp;
					for(k=0;k<n;k++){
						cout<<a[k]<<" ";
					}
					cout<<endl;
					cnt++;
					break;
				}
				
				for(k=0;k<n;k++){
					cout<<a[k]<<" ";
				}
				cout<<endl;
			}
		if(cnt==0){
			a[0]=temp;
				for(k=0;k<n;k++){
					cout<<a[k]<<" ";
				}	
		cout<<endl;
		}	
	
    return 0; 
}
