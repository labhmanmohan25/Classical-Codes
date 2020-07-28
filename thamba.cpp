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

int main()
{
    FastIO;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
    	cin>>n;
    	set<ll>:: iterator itt;
    	vector< ll > cnt;
    	ll a[n];
		for(ll i=0;i<n;i++)
		cin>>a[i];
    	cnt.pb(a[0]);
    	for(ll i=1;i<n-1;i++)
    	{
    		if( a[i+1]<a[i]&&a[i-1]<a[i])
    			cnt.pb(a[i]);
    		else if( a[i+1]>a[i] && a[i-1]>a[i])
    			cnt.pb(a[i]);
    	}
    	cnt.pb(a[n-1]);
    	cout<<cnt.size();
    	cout<<nl;
    	for(auto itt=cnt.begin();itt!=cnt.end();itt++)
    	cout<<*itt<<sp;
    	cout<<nl;

	}
	return 0;
}
