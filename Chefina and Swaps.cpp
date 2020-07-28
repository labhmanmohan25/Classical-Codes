#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
#define ll long long
#define ull unsigned long long
const int INF = 1e9 + 5;
#define pb push_back
#define eb emplace_back
#define vll vector<long long int>
#define loop(i, a, b) for(long long int i = a; i < b; i++)
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pll pair<ll, ll>
#define vpair vector<pii>
#define vbool vector<bool>
#define mkp make_pair
#define scan(a,n) for(int i =0 ; i<n ; i++) cin>>a[i]
#define print(a,n) for(int i = 0 ; i < n ; i++) {cout<<a[i]<<' ';}cout<<'\n'
#define br '\n'
#define PRECISION std::cout.unsetf ( std::ios::fixed );std::cout.precision(10)

ll findOdd(vll ar, ll p) {
    ll res = 0;
    for (ll i = 0; i < p; i++) {
        res = res ^ ar[i];
    }
    return res;
}

int main(){
    FastIO;
    PRECISION;

    ll t;
    cin>>t;
    while(t--){
    	ll n;
    	cin>>n;
    	vll a(n), b(n), all;
    	unordered_map <ll, pair <ll, ll> > h;
    	loop(i, 0, n) {
    		cin>>a[i];
    		if(h.find(a[i]) == h.end()){
                h[a[i]].first = 0;
                h[a[i]].second = 0;
    		}
    		all.pb(a[i]);
    		h[a[i]].first++;
		}
    	loop(i, 0, n) {
    		cin>>b[i];
    		if(h.find(a[i]) == h.end()){
                h[a[i]].first = 0;
                h[a[i]].second = 0;
    		}
    		all.pb(b[i]);
    		h[b[i]].second++;
		}
		if(findOdd(all, all.size()) != 0) {
			cout<<"-1"<<br;
			continue;
		}
		else {
			vll swap1, swap2;
			for(auto i : h) {
				ll diff = abs(i.second.first - i.second.second);
				if(i.second.first > i.second.second) {
					loop(j, 0, (diff / 2)) {
						swap1.pb(i.first);
					}
				}
				if(i.second.first < i.second.second) {
					loop(j, 0, (diff / 2)){
						swap2.pb(i.first);
					}
				}
			}
            sort(swap1.begin(), swap1.end());
            sort(swap2.begin(), swap2.end(), greater<ll> ());
            sort(all.begin(), all.end());
			ll sum = 0;
			for(ll i = 0; i < swap1.size(); i++) {
				sum = sum + min(min(swap1[i], swap2[i]), 2 * all[0]);
			}
			cout<<sum<<br;
		}
    }
    return 0;
}
