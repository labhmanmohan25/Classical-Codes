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
    	ll n;
		cin>>n;
		string s;
		cin>>s;
		string sol="";
		for(ll i = 0; i < n; i++){
			if(s[i] == '0'){
				sol = sol + s[i];
			} 
			else{
				ll j = n - 1;
				for(; j > i; j--){
					if(s[j]=='0') {
						break;
					}
				}
				i = j;
				sol = sol + s[i];
			}
		}
		cout<<sol<<nl;
	}

    return 0;
}
