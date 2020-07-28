#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <ctype.h>
using namespace std;
using ll = long long;
const int INF = 1e9 + 5;

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

ll f(ll n)
{
    if (n % 2 == 0)
        return 2;

    for (ll i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return i;
    }

    return n;
}

int main()
{
    int t;
    cin >> t;
    vector<ll> ld(1000000 + 1, 0);
    for(ll i = 2; i <= 1000000; i++){
        ld[i] = f(i);
    }

    while(t--){
        ll n, k;
        cin>>n>>k;
        for(ll i = 0; i < k; i++){
            n = n + ld[n];
        }
        cout<<n<<"\n";
    }

    return 0;
}
