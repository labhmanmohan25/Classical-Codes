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
using ll = long long;
const int INF = 1e9 + 5;
#define pb push_back
#define vll vector<long long int>
#define loop(i, a, b) for(long long int i = a; i < b; i++)
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define PI 3.14159265

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

void print_vector2(vector<vector<ll> >v){
    for(ll i=0;i<v.size();i++){
        for(ll j=0;j< v[i].size();j++){
            cout<<v[i][j]<<" ";
        }cout<<"\n";
    }
}

void print_vector1(vector<ll> v){
    for(ll i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<"\n";
}

ll gcd(ll a, ll b){
    return __gcd(a, b);
}

int main(){
    FastIO;

    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        vll a(n), b(n);
        loop(i, 0, n){
            cin>>a[i];
        }
        loop(i, 0, n){
            cin>>b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<ll> ());
        ll i = 0;
        while(k--){
            if(a[i] > b[i]){
                break;
            }
            else{
                ll temp;
                temp = a[i];
                a[i] = b[i];
                b[i] = temp;
            }
            i++;
        }
        cout<<accumulate(a.begin(), a.end(), 0)<<"\n";
    }

    return 0;
}
