#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
using namespace std;
const int INF = 1e9 + 5;
const int MOD = 1000000007;
const int MAX = 10000005;
const double PI = acos(-1.0);
#define pb push_back
#define vll vector<long long int>
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define       ll         long long
#define       ull        unsigned long long
#define       pii        pair <ll,ll>
#define       mii        map <ll,ll>
#define       msi        map <string,ll>
#define       pb         push_back
#define       nl         "\n"
#define       sp         " "

int main(){
	
	FastIO;

    ll t;
    cin>>t;
	while(t--){
		ll n , k, c=0, o = 1;
		cin>>n>>k;
		string s;
		cin>>s;
		for(ll i = 0; i < n; i++){
			if(s[i] == '1') 
				o = 0;
		}
		if(o){
			ll c = 0;
			c = c + (n / (k + 1));
			if(n % (k + 1)) 
				c++;
			cout<<c<<nl;
		}
		else{
			ll r1 = 0, r2 = n - 1;
			while(s[r1] != '1') 
				r1++;
			while(s[r2] != '1') 
				r2--;
			
			for(ll i = r1;i < r2+1; i++){
				ll j = i;
				if(s[i] == '1') 
					continue;
				while(s[j] == '0' && j <= r2) 
					j++;				
			c = c + (j - i - k) / (k + 1);
				i = j;
			}
		
			ll l1 = max(0LL, r1 - k), l2 = max(0LL, n - 1 - r2 - k);
			
			ll c1 = 0LL, c2 = 0LL;
				c1 = c1 + (l1 / (k + 1));
				if(l1 % (k + 1)) 
					c1++;
				c2 = c2 + (l2 / (k + 1));
				if(l2 % (k + 1)) 
					c2++;
					
			cout<<c + c1 + c2<<nl;
		}
	}
	return 0;
}
