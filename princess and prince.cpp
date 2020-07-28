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
#define ll long long int
const int INF = 1e9 + 5;
#define pb push_back
#define eb emplace_back
#define vll vector<long long int>
#define loop(i, a, b) for(long long int i = a; i < b; i++)
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pii pair<ll, ll>
#define vpair vector<pii>
#define vbool vector<bool>
#define mkp make_pair
#define scan(a,n) for(int i =0 ; i<n ; i++) cin>>a[i]
#define print(a,n) for(int i = 0 ; i < n ; i++) {cout<<a[i]<<' ';}cout<<'\n'
#define s second
#define f first
#define br '\n'
#define permute next_permutation
#define pqua priority_queue<ll>
#define pqud priority_queue<ll, vector<ll>, greater<ll> >
#define bs binary_search
#define lb lower_bound
#define ub upper_bound
#define maxi *max_element
#define pi acos(-1)
#define PRECISION std::cout.unsetf ( std::ios::fixed );std::cout.precision(10)
#define ull unsigned long long

vector<long long int> sieve(long long int n){
 	vector<long long int> primes;
 	bool isPrime[n+1] = {false};
 	isPrime[1] = isPrime[0] = false;
 	for(long long int i = 2;i<=n;i++)
 	{
 		isPrime[i] = true;
 	}
 	for(long long int i = 2;i*i<=n;i++)
 	{
 		if(isPrime[i])
 		{
 			for(long long int j = i*i;j<=n;j+=i)
 			{
 				isPrime[j] = false;
 			}
 		}
 	}
 	for(long long int i = 2;i<=n;i++)
 	{
 		if(isPrime[i])
 		{
 			primes.push_back(i);
 		}
 	}
 	return primes;
}

ll gcd(ll a, ll b) {
    return __gcd(a, b);
}

// v.back()
// v.erase(v.begin(), v.brgin + k)
// v.insert(at which place v.bigin() + 1 implines at i = 1, no. of times, value)
// v.insert(position, copy.begin(), copy.end())
// v1.swap(v2)
// v.clear() to clear v.empty() to check empty
// map assending order and set descending order
// stringstream ss(str) Used for breaking words

int main(){
    FastIO;
    PRECISION;

    ll t;
    cin>>t;
    while(t--){
    	ll n;
    	vll v(n + 1, 0);
    	vll hogi;
    	loop(i, 1, n + 1){
    		ll temp;
    		cin>>temp;
    		ll shadi = -1
    		vll p(n);
    		loop(j, 0, n){
    			cin>>p[j];
    			if(v[p[j]] == 0 && shadi == -1){
    				shadi = v[p[j]];
    			}
    		}
    		if(shadi != -1){
    			v[shadi] = 1;
    		}
    		else{
    			hogi.pb(i);
    		}
    	}
    	if(hogi.size() == 0){
    		cout<<"OPTIMAL"<<br;
    	}
    	else{
    		ll index = 0;
    		loop(i, 1, n + 1){
    			if(v[i] == 0){
    				cout<<hogi[index]<<" "<<i<<br;
    				index++;
    			}
    		}
    	}

    }


    return 0;
}
