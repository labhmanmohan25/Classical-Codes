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
#define ll  long long int
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

void print_vector2(vector<vector<ll> >v) {
    for(ll i=0;i<v.size();i++){
        for(ll j=0;j< v[i].size();j++){
            cout<<v[i][j]<<" ";
        }cout<<"\n";
    }
}

void print_vector1(vector<ll> v) {
    for(ll i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<"\n";
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

int main(){
    FastIO;
    PRECISION;

    string s;
    cin>>s;
    ll m;
    cin>>m;
    vll v(s.size());
    v[0] = 0;
    loop(i, 1, s.size()){
        if(s[i] == s[i - 1]){
            v[i] = v[i - 1] + 1;
        }
        else{
            v[i] = v[i - 1];
        }
    }
    loop(i, 0, m){
        ll l, r;
        cin>>l>>r;
        cout<<v[r - 1] - v[l - 1]<<br;
    }


    return 0;
}
