#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	long long int n,i;
	int a[101]={0},temp;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>temp;
		a[temp]++;
	}
	for(i=0;i<100;i++){
		cout<<a[i]<<" ";
	}
	
    return 0; 
}
