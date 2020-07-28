#include <bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		string s;
		cin>>s;
		
		int pref[n]={0};
		for(int i=0;i<m;i++){
			int temp;
			cin>>temp;
			pref[temp-1]++;
		}		
		for(int i=n-1;i>0;i--){
			pref[i-1]+=pref[i];
		}
		vector <int> ans(26,0);
		for(int i=0;i<n;i++){
			ans[s[i]-'a']+=pref[i];
			ans[s[i]-'a']++;
		}
		for(int i=0;i<26;i++)
			cout<<ans[i]<<" ";
			cout<<endl;
			
	}

	return 0;
}
