#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	int n,i,t;
	cin>>n;
	vector<int> a,b;
	for(i=0;i<n;i++){
		cin>>t;
		a.pushback(t);	
	}
	b=a;
	sort(b.begin(), b.end());
	
	
    return 0; 
}
