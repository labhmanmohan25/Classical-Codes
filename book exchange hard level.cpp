#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
using namespace std;
using ll = long long;
const int INF = 1e18L + 5;

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> v(n),compare(n);
		vector<ll> ans(n);
		for(ll i=1; i <= n; i++){
			cin>>compare[i];
			v[i] = compare[i] - 1;
		}
        for(ll i = 0; i < n; i++){
                ll count = 0;
            while(v[i] != i){
                v[i] = v[v[i]];
                count++;
                if(v[i] == i){
                    ans[i] = count;
                }
            }
        }
        for(ll i = 0; i < n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
	}

    return 0;
}

