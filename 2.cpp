#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	int t;
	char w[100],s[100];
	while(t--){
		cin>>w;
		strcpy(s,w);
		sort(s,s+100,greater<char>());
		if(w==s){
			cout<<"no answer"<<endl;
		}	
		else	
	}

    return 0; 
}
