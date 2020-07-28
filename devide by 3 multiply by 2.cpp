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

ll gcd(ll a, ll b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

ll two(ll n){
    ll cnt = 0;
    while(n != 0){
        if(n % 2 == 0){
            cnt++;
            n = n / 2;
        }
        else{
            return cnt;
        }
    }
}

ll three(ll n){
    ll cnt = 0;
    while(n != 0){
        if(n % 3 == 0){
            cnt++;
            n = n / 3;
        }
        else{
            return cnt;
        }
    }
}

int main(){
    FastIO;

    ll n;
    cin>>n;
    ll a[n][3];
    loop(i, 0, n){
        cin>>a[i][0];
        a[i][1] = two(a[i][0]);
        a[i][2] = three(a[i][0]);
    }
    loop(i, 0, n){
        loop(j, i + 1, n){
            if(a[i][1] > a[j][1]){
                swap(a[i][0], a[j][0]);
                swap(a[i][1], a[j][1]);
                swap(a[i][2], a[j][2]);
            }
        }
    }
    loop(i, 0, n){
        loop(j, i + 1, n){
            if(a[i][2] < a[j][2]){
                swap(a[i][0], a[j][0]);
                swap(a[i][1], a[j][1]);
                swap(a[i][2], a[j][2]);
            }
        }
    }
    loop(i, 0, n){
        cout<<a[i][0]<<" ";
    }

    return 0;
}
